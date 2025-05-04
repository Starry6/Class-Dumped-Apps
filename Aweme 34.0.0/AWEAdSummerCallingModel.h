@interface AWEAdSummerCallingModel : MTLModel
@property (nonatomic) AWEAdSummerCallingChargingCardModel chargingCardInfo;
@property (nonatomic) AWEAdSummerCallingLongPressModel longPressInfo;
@property (nonatomic) AWEAdSummerCallingTransitionModel transitionInfo;
@property (nonatomic) AWEAdSummerCallingPreloadResourcesModel preloadResources;
@property (nonatomic) AWEAdCouponRequestModel couponInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setPreloadResources:;
- (id)chargingCardInfo;
- (id)couponInfo;
- (id)longPressInfo;
- (void)setLongPressInfo:;
- (void)setChargingCardInfo:;
- (void)setCouponInfo:;
- (void).cxx_destruct;
- (id)preloadResources;
- (void)setTransitionInfo:;
- (id)transitionInfo;
+ (id)chargingCardInfoJSONTransformer;
+ (id)longPressInfoJSONTransformer;
+ (id)transitionInfoJSONTransformer;
+ (id)preloadResourcesJSONTransformer;
+ (id)couponInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
