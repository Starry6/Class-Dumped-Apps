@interface HTSLiveEffectUtilTextInfo : IESLivePBBaseMessage
@property (nonatomic) NSString placeholderKey;
@property (nonatomic) NSString content;
@property (nonatomic) q fontSize;
@property (nonatomic) NSString fontColor;
+ (id)descriptor;
@end
