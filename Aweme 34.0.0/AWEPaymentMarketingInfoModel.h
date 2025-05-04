@interface AWEPaymentMarketingInfoModel : AWEBaseApiModel
@property (nonatomic) AWEPaymentLimitFreeConfigModel limitFreeConfigModel;
@property (nonatomic) AWEPaymentLimitFreeHintModel limitFreeHintModel;
@property (nonatomic) AWEPaymentApplyCouponModel applyCouponModel;
@property (nonatomic) NSArray marketingTags;
- (id)limitFreeConfigModel;
- (void)setLimitFreeConfigModel:;
- (id)limitFreeHintModel;
- (void)setLimitFreeHintModel:;
- (id)applyCouponModel;
- (void)setApplyCouponModel:;
- (id)marketingTags;
- (void)setMarketingTags:;
- (void).cxx_destruct;
+ (id)limitFreeConfigModelJSONTransformer;
+ (id)limitFreeHintModelJSONTransformer;
+ (id)applyCouponModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
