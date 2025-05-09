@interface AWEFavoriteVideoSnackBarView : UIView
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UIImageView indicatorImageView;
@property (nonatomic) NSTimer snackBarTimer;
@property (nonatomic) UITapGestureRecognizer tapGes;
@property (nonatomic) NSString itemID;
@property (nonatomic) UIView containerView;
@property (nonatomic) UIView collectVideoContainerView;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel tipsLabel;
@property (nonatomic) <AWEFavoriteVideoSnackBarViewDelegate> delegate;
@property (nonatomic) UIView lastA11yView;
- (id)tipsLabel;
- (void)setTipsLabel:;
- (id)indicatorImageView;
- (void)setIndicatorImageView:;
- (void)p_setUI;
- (id)tapGes;
- (void)setTapGes:;
- (void)showSnackBarAfterDismissOnView;
- (id)p_createTimer;
- (void)didClickedSnackBar;
- (void)dismissSnackBarAnimated:;
- (void)showSnackBarAnimated:;
- (id)snackBarTimer;
- (void)setSnackBarTimer:;
- (void)dismissSnackBarIfNeeded;
- (void)setLastA11yView:;
- (void)updateSnackBarShowingStatus:itemID:;
- (void)didEndDisplayAwemeModel:;
- (id)collectVideoContainerView;
- (id)lastA11yView;
- (void)showCollectVideoSnackBar;
- (void)recreateTimer;
- (void)showCollectVideoSnackBarAnimated;
- (void)setCollectVideoContainerView:;
- (id)itemID;
- (void)setItemID:;
- (id)init;
- (BOOL)isShowing;
- (id)delegate;
- (id)containerView;
- (void)stopTimer;
- (void)setContainerView:;
- (void)setTitleLabel:;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setDelegate:;
- (void)setIconImageView:;
- (void)setIsShowing:;
@end
