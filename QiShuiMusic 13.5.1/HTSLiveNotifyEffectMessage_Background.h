@interface HTSLiveNotifyEffectMessage_Background : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage backgroundImage;
@property (nonatomic) BOOL hasBackgroundImage;
@property (nonatomic) NSString backgroundColor;
@property (nonatomic) HTSLiveImage backgroundEffect;
@property (nonatomic) BOOL hasBackgroundEffect;
+ (id)descriptor;
@end
