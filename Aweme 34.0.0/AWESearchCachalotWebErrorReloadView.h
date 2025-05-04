@interface AWESearchCachalotWebErrorReloadView : UIView
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel alertLabel;
@property (nonatomic) UIButton reloadButton;
@property (nonatomic) @? reloadBlock;
- (void)setReloadButton:;
- (id)reloadButton;
- (void)reloadButtonClick;
- (id)alertLabel;
- (void)setAlertLabel:;
- (id)initWithFrame:;
- (id)iconImageView;
- (void).cxx_destruct;
- (void)setIconImageView:;
- (void)setReloadBlock:;
- (id)reloadBlock;
- (void)createUI;
@end
