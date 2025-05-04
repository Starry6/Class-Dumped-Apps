@interface AWEMarketingInnerPushCommonView : UIView
@property (nonatomic) AWEInnerNotificationRequest request;
@property (nonatomic) <AWEInnerNotificationContent> notificationContent;
@property (nonatomic) Q marketingStyle;
@property (nonatomic) AWEMarketingCouponInnerPushCommonView couponView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addSubviews;
- (id)couponView;
- (void)setCouponView:;
- (id)notificationContent;
- (void)trackInnerPushForScene:;
- (void)setNotificationContent:;
- (void)updateViewWithRequest:notificationContent:;
- (id)initWithMarketingStyle:;
- (void)setMarketingStyle:;
- (unsigned long long)marketingStyle;
- (void)addCouponSubviews;
- (void)addActivitySubviews;
- (void).cxx_destruct;
- (void)setRequest:;
- (id)request;
- (void)didTapActionButton;
@end
