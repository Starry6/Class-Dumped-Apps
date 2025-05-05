@interface IESECLiveAnchorCouponListPopupView : IESECLiveAnchorCommonPopupView
@property (nonatomic) NSDictionary params;
@property (nonatomic) @? offLiveRoomGrantHandler;
@property (nonatomic) IESECLiveAnchorCouponListView listView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)couponListView:didGrantOffLiveCoupon:result:;
- (id)initWithRootView:params:onGrantCoupon:;
- (id)offLiveRoomGrantHandler;
- (void)p_setupCouponListView;
- (void)setOffLiveRoomGrantHandler:;
- (double)headerHeight;
- (void)setListView:;
- (id)listView;
- (void).cxx_destruct;
- (id)params;
- (void)setParams:;
@end
