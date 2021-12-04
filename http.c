
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <chilkat/C_CkHttp.h>
#include <chilkat/C_CkHttpRequest.h>
#include <chilkat/C_CkHttpResponse.h>

int main(int argc, char *argv[]){
        //
        HCkHttp http;
        HCkHttpRequest req;
        HCkHttpResponse resp;
        //
        http = CkHttp_Create();
        req = CkHttpRequest_Create();
        //
        CkHttpRequest_putHttpVerb(req,"GET");
        //CkHttpRequest_putPath(req, "/");
        //
        resp = CkHttp_SynchronousRequest(http,"ifconfig.me",443,1,req);
        //printf("%d\n",CkHttp_getLastMethodSuccess(http));
        if(CkHttp_getLastMethodSuccess(http)!=1){
                printf("Error!\n");
                return 0;
        }
        printf("%s\n",CkHttpResponse_bodyStr(resp));
        CkHttpResponse_Dispose(resp);
        CkHttpRequest_Dispose(req);
        CkHttp_Dispose(http);
}
