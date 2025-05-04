@interface AWESnackBarView : UIView
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel title;
@property (nonatomic) UIButton rightBtn;
@property (nonatomic) UITapGestureRecognizer tapGes;
@property (nonatomic) AWESnackBarViewContext context;
- (void)initSubViews;
- (id)rightBtn;
- (void)setRightBtn:;
- (id)tapGes;
- (void)setTapGes:;
- (void)didClickedSnackBar;
- (void)dismissSnackBarAnimated:;
- (void)showSnackBarAnimated:;
- (void)dismissSnackBarIfNeeded;
- (void)p_rightBtnDidPressed;
- (void)showSnackBarAfterDismissOnView:oldContext:;
- (void)updateSnackBarShowingStatus:newContext:oldContext:;
- (id)init;
- (id)iconImageView;
- (void)setContext:;
- (void).cxx_destruct;
- (id)title;
- (void)reset;
- (id)context;
- (void)setTitle:;
- (void)setIconImageView:;
- (void)updateWithContext:;
@end
