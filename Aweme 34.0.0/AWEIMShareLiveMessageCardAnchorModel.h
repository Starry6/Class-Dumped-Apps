@interface AWEIMShareLiveMessageCardAnchorModel : MTLModel
@property (nonatomic) Q anchorType;
@property (nonatomic) AWEIMShareLiveMessageCardBenefitInfo benefitInfo;
@property (nonatomic) AWEIMShareLiveMessageCardProductInfo productInfo;
@property (nonatomic) AWEIMShareLifeLiveMessageCardProductInfo lifeProductInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)benefitInfo;
- (void)setBenefitInfo:;
- (id)lifeProductInfo;
- (void)setLifeProductInfo:;
- (id)productInfo;
- (void).cxx_destruct;
- (unsigned long long)anchorType;
- (void)setProductInfo:;
- (void)updateWithModel:;
- (void)setAnchorType:;
+ (id)benefitInfoJSONTransformer;
+ (id)productInfoJSONTransformer;
+ (id)lifeProductInfoJSONTransformer;
+ (id)emptyModel;
+ (id)JSONKeyPathsByPropertyKey;
@end
