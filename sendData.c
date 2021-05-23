#include "appdev.h"

void send_data(Data data)
{
    CURL *curl;
    CURLcode res;
    char postdata[100];
    sprintf_s(postdata, "min=%d&max=%d&user=%s", data.min, data.max, data.rname);

    curl_global_init(CURL_GLOBAL_ALL);

    curl = curl_easy_init();
    if (curl)
    {
        /* First set the URL that is about to receive our POST. This URL can
           just as well be a https:// URL if that is what should receive the
           data. */
        curl_easy_setopt(curl, CURLOPT_URL, "http://www.cc.puv.fi/~1800927/testCurl.php");

        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, postdata);

        res = curl_easy_perform(curl);

        if (res != CURLE_OK)
            fprintf(stderr, "curl_easy_perform() failed: %s\n",
                    curl_easy_strerror(res));

        curl_easy_cleanup(curl);
    }
    curl_global_cleanup();
}
