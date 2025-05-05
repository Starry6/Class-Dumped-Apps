@interface WindowsPrompt_WindowsButton : IESLivePBBaseMessage
@property (nonatomic) NSString buttonText;
@property (nonatomic) NSString buttonSchemaURL;
+ (id)descriptor;
@end
