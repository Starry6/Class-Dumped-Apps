@interface HTSLiveEffectUtilImageInfo : IESLivePBBaseMessage
@property (nonatomic) NSString placeholderKey;
@property (nonatomic) HTSLiveImage mixImage;
@property (nonatomic) BOOL hasMixImage;
+ (id)descriptor;
@end
