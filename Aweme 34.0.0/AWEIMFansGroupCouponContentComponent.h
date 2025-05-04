@interface AWEIMFansGroupCouponContentComponent : AWEIMFlexComponent
@property (nonatomic) <AWEIMCommerceCouponBuilderProtocol> builder;
@property (nonatomic) AWEIMFansGroupCouponModel couponModel;
@property (nonatomic) BOOL shouldRefresh;
@property (nonatomic) q scene;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)cellVisibleLifeCycleChanged:;
- (void)cellWillDisplay:;
- (void)setCouponModel:;
- (id)couponModel;
- (BOOL)shouldRefresh;
- (void)setShouldRefresh:;
- (void)p_createPresenter;
- (void)p_createBuilderAndModel;
- (void)p_refreshExtWithCouponModel:;
- (void)p_processCurrentCommerceCoupon:;
- (void)p_enterpriseTrack;
- (id)displayMessage;
- (void)setScene:;
- (id)builder;
- (id)message;
- (long long)scene;
- (void).cxx_destruct;
- (void)setBuilder:;
@end
