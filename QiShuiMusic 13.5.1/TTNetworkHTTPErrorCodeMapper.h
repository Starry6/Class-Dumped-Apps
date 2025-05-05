@interface TTNetworkHTTPErrorCodeMapper : NSObject
+ (id)getCodeMapper;
+ (id)getErrnoMapper;
+ (id)keyForCode:;
+ (id)keyForErrno:;
+ (long long)mapErrno:;
+ (long long)mapErrorCode:;
+ (long long)unknonwErrorMapcode;
@end
