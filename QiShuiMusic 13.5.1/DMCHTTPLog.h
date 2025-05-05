@interface DMCHTTPLog : NSObject
+ (void)logHTTPDetailsForIdentifier:request:response:responseData:responseError:;
+ (void)logHTTPDetailsForIdentifier:request:response:responseURL:responseError:;
+ (void)_writeRequestLogToURL:request:response:responseData:responseError:;
+ (id)_logDirectoryForIdentifier:;
@end
