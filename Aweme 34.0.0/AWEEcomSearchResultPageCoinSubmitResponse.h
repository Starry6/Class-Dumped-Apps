@interface AWEEcomSearchResultPageCoinSubmitResponse : AWEBaseApiModel
@property (nonatomic) NSDictionary logExtra;
@property (nonatomic) AWEEcomSearchBannerModel toast;
- (void)setLogExtra:;
- (id)logExtra;
- (void).cxx_destruct;
- (void)setToast:;
- (id)toast;
+ (id)toastJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
