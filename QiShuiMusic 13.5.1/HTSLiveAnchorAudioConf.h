@interface HTSLiveAnchorAudioConf : IESLivePBBaseMessage
@property (nonatomic) q status;
@property (nonatomic) q switcherWelcome;
@property (nonatomic) q switcherThanks;
@property (nonatomic) q switcherCongrats;
+ (id)descriptor;
@end
