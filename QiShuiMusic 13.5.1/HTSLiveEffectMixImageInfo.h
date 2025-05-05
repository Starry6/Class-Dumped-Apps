@interface HTSLiveEffectMixImageInfo : IESLivePBBaseMessage
@property (nonatomic) NSString imageKey;
@property (nonatomic) HTSLiveImage mixImage;
@property (nonatomic) BOOL hasMixImage;
+ (id)descriptor;
@end
