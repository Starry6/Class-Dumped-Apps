@interface AWELongVideoFeedPaymentInfoBody : AWEBaseApiModel
@property (nonatomic) NSString originPrice;
@property (nonatomic) NSString realPrice;
@property (nonatomic) NSString buttonText;
@property (nonatomic) NSString tips;
@property (nonatomic) q payType;
- (id)originPrice;
- (void)setOriginPrice:;
- (long long)payType;
- (float)priceForMetric;
- (id)payIntroType;
- (id)realPrice;
- (void)setRealPrice:;
- (void)setPayType:;
- (id)tips;
- (id)buttonText;
- (void).cxx_destruct;
- (void)setTips:;
- (void)setButtonText:;
+ (id)JSONKeyPathsByPropertyKey;
@end
