@interface HTSLiveShowExperienceInfo : IESLivePBBaseMessage
@property (nonatomic) HTSLivePlayerProgressBarSkin playerProgressBarSkin;
@property (nonatomic) BOOL hasPlayerProgressBarSkin;
@property (nonatomic) q xiguaTvCastConfig;
@property (nonatomic) NSInteger vsCommentStyle;
@property (nonatomic) BOOL vsCommentSwitcher;
+ (id)descriptor;
@end
