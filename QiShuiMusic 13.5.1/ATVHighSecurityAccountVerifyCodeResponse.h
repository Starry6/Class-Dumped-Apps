@interface ATVHighSecurityAccountVerifyCodeResponse : AAResponse
@property (nonatomic) BOOL success;
@property (nonatomic) NSString errorTitle;
@property (nonatomic) NSString errorMessage;
@property (nonatomic) q errorCode;
- (long long)errorCode;
- (BOOL)success;
- (id)errorMessage;
- (id)errorTitle;
@end
