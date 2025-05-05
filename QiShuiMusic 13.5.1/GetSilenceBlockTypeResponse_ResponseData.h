@interface GetSilenceBlockTypeResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) q blockType;
@property (nonatomic) NSString toastText;
@property (nonatomic) WindowsPrompt windowsPrompt;
@property (nonatomic) BOOL hasWindowsPrompt;
+ (id)descriptor;
@end
