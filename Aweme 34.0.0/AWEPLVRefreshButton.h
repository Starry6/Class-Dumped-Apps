@interface AWEPLVRefreshButton : UIView
@property (nonatomic) q buttonType;
@property (nonatomic) <AWEPLVRefreshButtonDelegate> delegate;
@property (nonatomic) DUXBasicButton button;
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UILabel label;
- (void)updateViewWithButtonType:;
- (void)onRefreshBtnClicked:;
- (long long)buttonType;
- (void)setLabel:;
- (id)init;
- (id)delegate;
- (void)setButton:;
- (id)iconView;
- (id)label;
- (void)setIconView:;
- (void).cxx_destruct;
- (void)setButtonType:;
- (void)setDelegate:;
- (id)button;
- (void)setupView;
@end
