@interface HTSLiveCreateTeamfightGuideContent : IESLivePBBaseMessage
@property (nonatomic) HTSLiveText toastText;
@property (nonatomic) BOOL hasToastText;
+ (id)descriptor;
@end
