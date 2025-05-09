@interface AWEIMVideoMessageTableViewCell : AWEIMUserMessageTableViewCell
@property (nonatomic) AWEIMUploadProgressView sendProgressView;
@property (nonatomic) AWEIMMessageShareButton shareButton;
@property (nonatomic) UIView displayMaskView;
@property (nonatomic) UIView videoContainerView;
@property (nonatomic) UIImageView playIconImageView;
@property (nonatomic) UIImageView videoPosterImageView;
@property (nonatomic) AWEIMMessageAttachmentDownloadViewModel downloadVM;
@property (nonatomic) AWEIMMessageAttachmentUploadViewModel uploadVM;
@property (nonatomic) FBKVOController vmKVO;
@property (nonatomic) NSString posterFileID;
@property (nonatomic) NSString videoFileID;
@property (nonatomic) NSString posterFilePath;
@property (nonatomic) NSString videoFilePath;
@property (nonatomic) NSString videoCoverFilePath;
@property (nonatomic) NSString videoAssetIdentifier;
@property (nonatomic) NSString coverImageIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)displayMaskView;
- (void)setVideoFileID:;
- (void)addForwardMsgResource;
- (void)completeCoverageTaskForMessage:error:;
- (BOOL)configDownloadingStateLocalImage:;
- (id)configLocalImage:;
- (BOOL)configUploadingState;
- (void)configWithMessage:;
- (id)downloadVM;
- (void)handleVideoStartResendNty:;
- (id)menuTargetView;
- (BOOL)menuViewRectContainsPoint:;
- (void)notifyMessageStateChanged:;
- (void)p_addShareButtonIfNeed;
- (void)p_clipAndShowImage:;
- (void)p_dismissUploadingMaskView:;
- (void)p_layoutShareButtonIfNeed;
- (void)p_observeUploadVMWithNextFileID:;
- (void)p_onShareButtonClicked;
- (void)p_refreshImageUI;
- (void)p_showUploadingMaskView:;
- (id)playIconImageView;
- (id)posterFileID;
- (id)posterFilePath;
- (id)preloadTasksForMessage:;
- (id)sendProgressView;
- (void)setCoverImageIdentifier:;
- (void)setDisplayMaskView:;
- (void)setDownloadVM:;
- (void)setPlayIconImageView:;
- (void)setPosterFileID:;
- (void)setPosterFilePath:;
- (void)setSendProgressView:;
- (void)setUploadVM:;
- (void)setVideoAssetIdentifier:;
- (void)setVideoContainerView:;
- (void)setVideoCoverFilePath:;
- (void)setVideoFilePath:;
- (void)setVideoPosterImageView:;
- (void)setVmKVO:;
- (void)stateViewTapped:;
- (id)uploadVM;
- (id)videoAssetIdentifier;
- (id)videoCoverFilePath;
- (id)videoFileID;
- (id)videoFilePath;
- (id)videoPosterImageView;
- (void)videoPosterTapped:;
- (id)vmKVO;
- (id)initWithStyle:reuseIdentifier:;
- (void)dealloc;
- (void)layoutSubviews;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (void).cxx_destruct;
- (id)menuItems;
- (void)setupUI;
- (id)coverImageIdentifier;
- (id)shareButton;
- (void)setShareButton:;
- (id)videoContainerView;
+ (id)contentSizeWithMesasge:;
+ (id)getDrawFrameForImage:withSize:;
+ (id)p_defaultImageWithSize:;
+ (id)identifier;
@end
