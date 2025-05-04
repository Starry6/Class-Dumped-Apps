@interface AWEShareLivePostQRCodeSaveButton : UIButton
@property (nonatomic) UIImageView downloadImageView;
@property (nonatomic) UILabel downloadLabel;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) BOOL isLoaded;
- (void)setDownloadImageView:;
- (id)downloadImageView;
- (void)setupAsSaveButton;
- (void)setupAsRetry;
- (void)updateButtonUIWithDowloadSuccess:;
- (id)init;
- (BOOL)isLoading;
- (BOOL)isLoaded;
- (void).cxx_destruct;
- (void)setIsLoaded:;
- (void)setIsLoading:;
- (void)setupUI;
- (id)downloadLabel;
- (void)setDownloadLabel:;
@end
