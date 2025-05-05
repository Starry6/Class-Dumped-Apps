@interface HTSLiveTrayPostEffect : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage postEffectImg;
@property (nonatomic) BOOL hasPostEffectImg;
@property (nonatomic) NSString postSchema;
@property (nonatomic) q postDuration;
@property (nonatomic) NSInteger postEffectSource;
@property (nonatomic) NSMutableDictionary eventTracking;
@property (nonatomic) Q eventTracking_Count;
+ (id)descriptor;
@end
