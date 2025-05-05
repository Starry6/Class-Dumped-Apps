@interface HTSLiveTrayEffectMessage_Background : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage backgroundImage;
@property (nonatomic) BOOL hasBackgroundImage;
@property (nonatomic) NSString backgroundColor;
+ (id)descriptor;
@end
