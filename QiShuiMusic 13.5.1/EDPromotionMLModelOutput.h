@interface EDPromotionMLModelOutput : NSObject
@property (nonatomic) q promo;
@property (nonatomic) NSDictionary promoProbability;
@property (nonatomic) NSSet featureNames;
- (id)featureValueForName:;
- (id)featureNames;
- (void).cxx_destruct;
- (id)initWithPromo:promoProbability:;
- (long long)promo;
- (void)setPromo:;
- (id)promoProbability;
- (void)setPromoProbability:;
@end
