@interface LiveSenarioMessage : IESLivePBBaseMessage
@property (nonatomic) BOOL enableLiveAudio;
@property (nonatomic) BOOL enableLiveThirdParty;
@property (nonatomic) BOOL enableLiveScreenshot;
@property (nonatomic) LiveSenarioMessage_LiveToastMessage toast;
@property (nonatomic) BOOL hasToast;
+ (id)descriptor;
@end
