@interface AWEIMFansGroupCouponMessageTableViewCell : AWEIMUserMessageTableViewCell
@property (nonatomic) AWEIMCommerceCouponContainerView couponView;
@property (nonatomic) AWEIMFansGroupCouponModel couponModel;
@property (nonatomic) <AWEIMCommerceCouponBuilderProtocol> builder;
@property (nonatomic) <AWEIMCommerceCouponBuilderProtocol> sendBuilder;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCouponModel:;
- (void)setSendBuilder:;
- (void)configWithMessage:;
- (id)couponModel;
- (id)couponView;
- (id)menuTargetView;
- (void)processCurrentCommerceCoupon:;
- (void)refreshCouponStatus;
- (void)refreshExtWithCouponModel:;
- (id)sendBuilder;
- (void)setCouponView:;
- (void)trackDisplay;
- (void)layoutSubviews;
- (id)builder;
- (void).cxx_destruct;
- (id)menuItems;
- (void)setupUI;
- (void)setBuilder:;
+ (id)contentSizeWithMesasge:;
+ (id)identifier;
@end
