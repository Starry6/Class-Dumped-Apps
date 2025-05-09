@interface AWEAlbumAutoFilmViewController : UIViewController
@property (nonatomic) UIView containerView;
@property (nonatomic) UIImageView thumbnailImageView;
@property (nonatomic) UIView thumbnailImageViewMaskView;
@property (nonatomic) UIImageView loadingImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) UILabel progressLabel;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) UILabel errorTipsLabel;
@property (nonatomic) UIButton errorTipsButton;
@property (nonatomic) AWEAlbumAutoFilmUIConfig uiConfig;
@property (nonatomic) BOOL hasAppeared;
@property (nonatomic) NSTimer timer;
@property (nonatomic) q progress;
@property (nonatomic) q maxProgress;
@property (nonatomic) Q errorType;
@property (nonatomic) @? retryBlock;
@property (nonatomic) @? closeBlock;
- (void)setCloseBlock:;
- (id)closeBlock;
- (void)closeButtonClick:;
- (id)uiConfig;
- (id)errorTipsLabel;
- (void)setErrorTipsLabel:;
- (void)setUiConfig:;
- (void)fadeOut:;
- (void)updateThumbnailImage:;
- (void)startProgressUpdateForStage:;
- (id)thumbnailImageViewMaskView;
- (id)errorTipsButton;
- (void)updateProgressContent:;
- (void)removeProgressTimer;
- (void)startProgressUpdateWithInterval:;
- (void)showErrorTipWithType:;
- (void)resetViewStatus;
- (void)errorTipsButtonClick:;
- (void)setThumbnailImageViewMaskView:;
- (void)setErrorTipsButton:;
- (void)setTimer:;
- (id)timer;
- (void)viewDidLoad;
- (long long)progress;
- (id)containerView;
- (void)setContainerView:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (id)titleLabel;
- (BOOL)hasAppeared;
- (void)setProgress:;
- (void)setMaxProgress:;
- (void)fadeIn;
- (long long)maxProgress;
- (void)setupUI;
- (void)setSubTitleLabel:;
- (void)setupCornerRadius;
- (id)subTitleLabel;
- (void)setCloseButton:;
- (id)closeButton;
- (id)progressLabel;
- (void)setThumbnailImageView:;
- (id)thumbnailImageView;
- (void)setupData;
- (void)setProgressLabel:;
- (void)showError:;
- (unsigned long long)errorType;
- (void)setErrorType:;
- (void)setHasAppeared:;
- (id)loadingImageView;
- (void)setLoadingImageView:;
- (id)retryBlock;
- (void)setRetryBlock:;
@end
