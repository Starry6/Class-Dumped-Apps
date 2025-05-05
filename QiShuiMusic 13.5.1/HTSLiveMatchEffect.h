@interface HTSLiveMatchEffect : IESLivePBBaseMessage
@property (nonatomic) BOOL showEffect;
@property (nonatomic) HTSLiveImage effectResource;
@property (nonatomic) BOOL hasEffectResource;
+ (id)descriptor;
@end
