@interface AWEMixVideoPanelHeadView : UIView
@property (nonatomic) UIImageView iconImage;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel infoLabel;
@property (nonatomic) UIImageView hintIcon;
@property (nonatomic) AWEMixVideoModel mixVideoModel;
@property (nonatomic) BOOL isLightMode;
@property (nonatomic) AWEPaymentBadgeView paymentBadgeView;
@property (nonatomic) <AWEMixVideoHeadViewDelegate> delegate;
- (BOOL)isLightMode;
- (id)hintIcon;
- (void)setIsLightMode:;
- (id)paymentBadgeView;
- (void)setPaymentBadgeView:;
- (id)mixVideoModel;
- (void)setMixVideoModel:;
- (void)updateMixInfo:;
- (BOOL)shouldShowPaymentTagView:;
- (void)setLightMode;
- (void)tailIconTapped:;
- (BOOL)shouldShowExpectedCompletionTime:;
- (id)completionTimeText:;
- (id)getDataYear:;
- (void)setHintIcon:;
- (id)iconImage;
- (id)init;
- (id)delegate;
- (void)setIconImage:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setDelegate:;
- (id)infoLabel;
- (void)setInfoLabel:;
@end
