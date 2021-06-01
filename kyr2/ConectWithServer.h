#pragma once
#include <curl/curl.h>  
#include <iostream>
#include <string>

using std::string;

CURLcode post_req(string url, string body)
{
    CURL* curl;
    CURLcode res;

    curl = curl_easy_init();
    if (curl)
    {
        curl_easy_setopt(curl, CURLOPT_URL, url);
        curl_easy_setopt(curl, CURLOPT_POSTFIELDSIZE, body.size());
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, body.c_str());
        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);

        return res;
    }
    return  CURLcode();
}