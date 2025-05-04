@interface AWEPOIProfileCouponResponseModel : AWEBaseApiModel
@property (nonatomic) q shouldShowToast;
@property (nonatomic) NSString toastText;
- (id)toastText;
- (void)setToastText:;
- (long long)shouldShowToast;
- (void)setShouldShowToast:;
- (void).cxx_destruct;
+ (id)shouldShowToastJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
