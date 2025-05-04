@interface AWECloudAlbumDetailPreviewUploadView : UIView
@property (nonatomic) UIView errorView;
@property (nonatomic) UIButton emptyButton;
@property (nonatomic) UIButton retryButton;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) UIImageView iconView;
- (id)emptyButton;
- (void)setEmptyButton:;
- (id)initWithFrame:;
- (void)setup;
- (id)iconView;
- (void)setIconView:;
- (void).cxx_destruct;
- (void)setCloseButton:;
- (id)closeButton;
- (id)errorView;
- (void)setErrorView:;
- (void)setRetryButton:;
- (id)retryButton;
@end
