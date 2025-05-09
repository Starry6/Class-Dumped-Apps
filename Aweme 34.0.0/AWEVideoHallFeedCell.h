@interface AWEVideoHallFeedCell : UICollectionViewCell
@property (nonatomic) AWEVideoHallFeedPreviewModel previewModel;
@property (nonatomic) DUXTextTag videoTag;
@property (nonatomic) AWEGradientView gradientView;
@property (nonatomic) UILabel scoreLabel;
@property (nonatomic) UILabel updateCycleLabel;
@property (nonatomic) BOOL isCollect;
@property (nonatomic) NSObject screenCaptureBlocker;
@property (nonatomic) UIView tagBackgroundView;
@property (nonatomic) UILabel tagLabel;
@property (nonatomic) UIView<AWEVideoTryWatchViewProtocol> tryWatchView;
@property (nonatomic) BOOL isShowingScreenBlockToast;
@property (nonatomic) BOOL isEndPreview;
@property (nonatomic) AWEPageContext<AWEVideoHallFeedContextProtocol> context;
@property (nonatomic) BDImageView coverImageView;
@property (nonatomic) AWEVHFeedMetaView metaView;
@property (nonatomic) AWEVideoHallPlayVideoViewController videoController;
@property (nonatomic) AWEVHFeedControlView controlView;
@property (nonatomic) @? logExtraDict;
@property (nonatomic) @? moreFeedClick;
@property (nonatomic) <AWEVideoHallTrackerProtocol> tracker;
@property (nonatomic) @? collectClick;
@property (nonatomic) @? detailSchemaCallBack;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)initSubviews;
- (void)setLogExtraDict:;
- (id)logExtraDict;
- (void)updateLogExtraDict:;
- (id)coverImageView;
- (void)setCoverImageView:;
- (void)bindObserver;
- (id)videoTag;
- (void)setVideoTag:;
- (BOOL)isCollect;
- (void)setIsCollect:;
- (id)tagLabel;
- (void)setTagLabel:;
- (BOOL)isShowingScreenBlockToast;
- (void)setIsShowingScreenBlockToast:;
- (void)setScreenCaptureBlocker:;
- (id)screenCaptureBlocker;
- (void)setTagBackgroundView:;
- (id)tagBackgroundView;
- (void)trackFavouriteVideo:isCancel:;
- (id)tryWatchView;
- (void)setTryWatchView:;
- (void)recordPlaybackTime;
- (double)calculateStartTime;
- (BOOL)shouldPaymentChargePreviewConfig;
- (void)resetPlaybackTime;
- (id)metaView;
- (void)setMetaView:;
- (void)showCover;
- (void)seekPlaybackTime;
- (void)checkShouldShowPaymentFinishView;
- (id)moreFeedClick;
- (id)detailSchemaCallBack;
- (id)collectClick;
- (void)collectLongVideoAlbum;
- (void)handlePlayerTap;
- (void)handleMetaViewTap;
- (void)clickCollection;
- (void)trackVideoPlayFinish;
- (void)hiddenCover;
- (void)updateSoundImageView;
- (void)trackFinishPaymentTrialEnd;
- (void)setMoreFeedClick:;
- (void)setCollectClick:;
- (void)setDetailSchemaCallBack:;
- (void)setPreviewModel:;
- (void)updateVideoControllerBlock;
- (void)setupControlView;
- (void)showPaymentCountDownTag;
- (void)setVideoTagLabelWithAlbumModel:;
- (id)updateCycleLabel;
- (id)previewModel;
- (void)dismissFinishView:;
- (void)goToDetailPage;
- (void)showFinishView;
- (void)trackFinishViewShow;
- (BOOL)isEndPreview;
- (void)setIsEndPreview:;
- (void)videoWillReapeatTriggeredByMetaView;
- (void)configWithPreviewModel:context:logExtraDict:;
- (void)setUpdateCycleLabel:;
- (BOOL)isPlaying;
- (id)gradientView;
- (void)play;
- (id)tracker;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void)setTracker:;
- (void)setContext:;
- (void).cxx_destruct;
- (void)setGradientView:;
- (void)reset;
- (id)controlView;
- (id)context;
- (void)stop;
- (void)pause;
- (void)initConstraints;
- (id)videoController;
- (void)setVideoController:;
- (id)scoreLabel;
- (void)setScoreLabel:;
- (void)handleTap;
- (void)setControlView:;
@end
