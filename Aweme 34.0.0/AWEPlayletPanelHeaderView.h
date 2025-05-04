@interface AWEPlayletPanelHeaderView : UIView
@property (nonatomic) UIImageView iconImage;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel infoLabel;
@property (nonatomic) AWEPlayletInfoModel playletVideoModel;
@property (nonatomic) AWEPaymentBadgeView paymentBadgeView;
- (id)paymentBadgeView;
- (void)setPaymentBadgeView:;
- (BOOL)shouldShowPaymentTagView:;
- (BOOL)shouldShowExpectedCompletionTime:;
- (id)completionTimeText:;
- (id)getDataYear:;
- (id)playletVideoModel;
- (void)updatePlayletInfo:;
- (void)setPlayletVideoModel:;
- (id)iconImage;
- (id)init;
- (void)setIconImage:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)infoLabel;
- (void)setInfoLabel:;
@end
