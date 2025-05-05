@interface IESECDisclaimerShowConfig : NSObject
@property (nonatomic) q promotionSource;
@property (nonatomic) q forceShowType;
@property (nonatomic) BOOL allowThird;
@property (nonatomic) NSDictionary extraTrackerParams;
@property (nonatomic) UIView containerView;
@property (nonatomic) NSString ecomAppID;
@property (nonatomic) NSDictionary disclaimerLoginInfo;
- (long long)promotionSource;
- (BOOL)allowThird;
- (id)disclaimerLoginInfo;
- (id)ecomAppID;
- (id)extraTrackerParams;
- (long long)forceShowType;
- (id)initWithPromotionSource:;
- (void)setAllowThird:;
- (void)setDisclaimerLoginInfo:;
- (void)setEcomAppID:;
- (void)setExtraTrackerParams:;
- (void)setForceShowType:;
- (void)setPromotionSource:;
- (void)setupDefaultValues;
- (id)init;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
@end
