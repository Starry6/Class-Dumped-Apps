@interface AWEIMEncryptedMessageTableViewCell : AWEIMUserMessageTableViewCell
@property (nonatomic) UIView displayBaseView;
@property (nonatomic) UIView displayMaskView;
@property (nonatomic) AWEIMMessageShareButton shareButton;
@property (nonatomic) AWEIMUploadProgressView sendProgressView;
@property (nonatomic) AWEIMMessageStateView loadingView;
@property (nonatomic) FBKVOController vmKVO;
@property (nonatomic) AWEIMMessageAttachmentDownloadViewModel downloadVM;
@property (nonatomic) AWEIMMessageAttachmentUploadViewModel uploadVM;
@property (nonatomic) UIImageView displayImageView;
@property (nonatomic) UIImage magnifyImage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)displayBaseView;
- (id)displayMaskView;
- (void)addForwardMsgResource;
- (BOOL)canSaveImageOrForwardMessage;
- (void)completeCoverageTaskForMessage:error:;
- (void)configLocalImageWithPath:identifier:completion:;
- (BOOL)configUploadingStateLocalImageExists:fileID:;
- (void)configWithMessage:;
- (id)displayImageView;
- (void)displayImageViewTapped:;
- (id)downloadVM;
- (id)magnifyImage;
- (id)menuTargetView;
- (BOOL)menuViewRectContainsPoint:;
- (void)notifyMessageStateChanged:;
- (void)p_addShareButtonIfNeed;
- (void)p_clipAndShowImage:;
- (void)p_dismissMenu;
- (void)p_dismissUploadingMaskView:;
- (void)p_layoutShareButtonIfNeed;
- (void)p_onShareButtonClicked;
- (void)p_refreshImageUI;
- (void)p_registerDownloadKVO;
- (void)p_showUploadingMaskView:;
- (void)p_startDownloadLoading;
- (void)p_stopDownloadLoading;
- (BOOL)p_tryToBeginDownload;
- (id)preloadTasksForMessage:;
- (id)sendProgressView;
- (void)setDisplayBaseView:;
- (void)setDisplayImageView:;
- (void)setDisplayMaskView:;
- (void)setDownloadVM:;
- (void)setMagnifyImage:;
- (void)setSendProgressView:;
- (void)setUploadVM:;
- (void)setVmKVO:;
- (void)stateViewTapped:;
- (id)uploadVM;
- (id)vmKVO;
- (id)initWithStyle:reuseIdentifier:;
- (void)layoutSubviews;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (void).cxx_destruct;
- (id)menuItems;
- (void)setupUI;
- (id)loadingView;
- (void)setLoadingView:;
- (id)shareButton;
- (void)setShareButton:;
+ (id)aspectFillFrameContentWithContentSize:containerSize:;
+ (id)contentSizeWithMesasge:;
+ (id)p_clipedImageWithImage:size:;
+ (id)p_defaultImageWithSize:;
+ (id)identifier;
@end
