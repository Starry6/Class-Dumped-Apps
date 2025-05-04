@interface AWECloudAlbumDetailNavigationRightView : UIView
@property (nonatomic) UIButton selectButton;
@property (nonatomic) UIButton cancelButton;
@property (nonatomic) UIButton moreButton;
@property (nonatomic) <AWECloudAlbumDetailNavigationRightViewDelegate> delegate;
- (void)selectAction;
- (void)showManageItem:showMoreItem:showCancelItem:;
- (id)delegate;
- (id)initWithFrame:;
- (void)setup;
- (id)moreButton;
- (id)cancelButton;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)cancelAction;
- (id)selectButton;
- (void)moreAction;
+ (double)contentWidth;
@end
