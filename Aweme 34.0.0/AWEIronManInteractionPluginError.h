@interface AWEIronManInteractionPluginError : NSObject
@property (nonatomic) NSString errorMsg;
@property (nonatomic) NSString errorType;
@property (nonatomic) q errorCode;
@property (nonatomic) q errorNo;
- (void)setErrorMsg:;
- (id)errorMsg;
- (long long)errorNo;
- (void)setErrorNo:;
- (void)setErrorCode:;
- (long long)errorCode;
- (void).cxx_destruct;
- (id)errorType;
- (void)setErrorType:;
@end
