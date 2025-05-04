@interface AWEGrouponSharkLoadResult : NSObject
@property (nonatomic) BOOL success;
@property (nonatomic) q errorCode;
@property (nonatomic) NSString errorMsg;
- (void)setErrorMsg:;
- (id)errorMsg;
- (void)setErrorCode:;
- (long long)errorCode;
- (void)setSuccess:;
- (void).cxx_destruct;
- (BOOL)success;
@end
