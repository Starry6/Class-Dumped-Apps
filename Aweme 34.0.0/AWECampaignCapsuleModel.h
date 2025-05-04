@interface AWECampaignCapsuleModel : MTLModel
@property (nonatomic) NSString capsuleBGColor;
@property (nonatomic) NSString capsuleBoderColor;
@property (nonatomic) double capsuleBoderWidth;
@property (nonatomic) AWECampaignCapsuleGradientModel gradient;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)capsuleBGColor;
- (void)setCapsuleBGColor:;
- (id)capsuleBoderColor;
- (void)setCapsuleBoderColor:;
- (double)capsuleBoderWidth;
- (void)setCapsuleBoderWidth:;
- (void)setGradient:;
- (id)gradient;
- (void).cxx_destruct;
+ (id)JSONTransformerForKey:;
+ (id)JSONKeyPathsByPropertyKey;
@end
