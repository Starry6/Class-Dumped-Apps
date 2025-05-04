@interface AWEIMCompanyCollectInfoTableViewCell : AWEIMLynxContainerBaseTableViewCell
@property (nonatomic) UIView hookTapGestureView;
@property (nonatomic) NSDate lastClickTimeDate;
- (void)configWithMessage:;
- (id)lastClickTimeDate;
- (void)setLastClickTimeDate:;
- (id)hookTapGestureView;
- (void)clickUnsupportTips;
- (id)enterpriseLynxEngine;
- (void)setEnterpriseLynxEngine:;
- (void)setHookTapGestureView:;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
- (id)menuItems;
- (void)layoutSubviews;
+ (double)recommendLynxHeightForMessage:;
+ (id)identifier;
@end
