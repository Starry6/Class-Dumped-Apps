@interface AWESearchCachalotNetworkStatus : NSObject
@property (nonatomic) q statusCode;
@property (nonatomic) q errorCode;
- (long long)statusCode;
- (void)setErrorCode:;
- (long long)errorCode;
- (void)setStatusCode:;
- (BOOL)success;
+ (id)statusWithError:itemCount:;
@end
