@interface AWEIMFansGroupAdvantageIconView : UIView
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel mainTitleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) AWEIMFansGroupIntroduceIconInfo model;
- (void)configWithModel:;
- (id)mainTitleLabel;
- (void)setMainTitleLabel:;
- (void)handleThemeReloadNotification;
- (void)setModel:;
- (void)dealloc;
- (id)initWithFrame:;
- (id)model;
- (id)iconImageView;
- (void).cxx_destruct;
- (void)setIconImageView:;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
@end
