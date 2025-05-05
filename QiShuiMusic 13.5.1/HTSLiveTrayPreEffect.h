@interface HTSLiveTrayPreEffect : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage preEffectImg;
@property (nonatomic) BOOL hasPreEffectImg;
@property (nonatomic) q trayStartTime;
@property (nonatomic) HTSLiveImage trayRipple;
@property (nonatomic) BOOL hasTrayRipple;
@property (nonatomic) NSString preSchema;
@property (nonatomic) q preDuration;
@property (nonatomic) NSInteger preEffectSource;
@property (nonatomic) NSString extra;
+ (id)descriptor;
@end
