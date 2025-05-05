@interface ATVHighSecurityAccountSendCodeResponse : AAResponse
@property (nonatomic) BOOL success;
@property (nonatomic) NSDictionary userDisplayStrings;
@property (nonatomic) NSString errorTitle;
@property (nonatomic) NSString errorMessage;
@property (nonatomic) q errorCode;
- (long long)errorCode;
- (BOOL)success;
- (id)errorMessage;
- (id)errorTitle;
- (id)userDisplayStrings;
@end
