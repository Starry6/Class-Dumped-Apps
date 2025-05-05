@interface GetAdminOperationTypeResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) q operationType;
@property (nonatomic) WindowsPrompt windowsPrompt;
@property (nonatomic) BOOL hasWindowsPrompt;
+ (id)descriptor;
@end
