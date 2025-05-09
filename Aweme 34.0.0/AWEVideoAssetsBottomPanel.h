@interface AWEVideoAssetsBottomPanel : UIView
@property (nonatomic) UIView toolbarBgView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) ACCAnimatedButton closeButton;
@property (nonatomic) ACCAnimatedButton okButton;
@property (nonatomic) UILabel timeTitleLabel;
@property (nonatomic) ACCAnimatedButton pauseButton;
@property (nonatomic) UIView videoCropContainerView;
@property (nonatomic) UIView timeLabelContainer;
@property (nonatomic) UILabel timeLabel;
@property (nonatomic) AWEVideoRangeSlider videoRangeSlider;
@property (nonatomic) UICollectionView framesCollectionView;
@property (nonatomic) UIView framesCollectionLeftMaskView;
@property (nonatomic) UIView framesCollectionRightMaskView;
@property (nonatomic) UILabel hintLabel;
@property (nonatomic) UILabel staticLivePhotoHintLabel;
@property (nonatomic) ACCThumbnailDataSource thumbnailDataSource;
@property (nonatomic) AWEAssetsCropAndClipViewModel viewModel;
@property (nonatomic) <AWEVideoAssetsBottomPanelDelegate> delegate;
@property (nonatomic) AVURLAsset videoAsset;
@property (nonatomic) {?={?=qiIq}{?=qiIq}} timeRange;
@property (nonatomic) double prepareWidth;
@property (nonatomic) @? scrollCallback;
@property (nonatomic) @? pauseCallback;
@property (nonatomic) @? resumeCallback;
@property (nonatomic) @? okCallback;
@property (nonatomic) @? closeCallback;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onCloseAction:;
- (void)updatePlayTime:;
- (void)setCloseCallback:;
- (id)closeCallback;
- (void)updatePlayStatus:;
- (void)actionMethod:;
- (id)framesCollectionView;
- (id)videoRangeSlider;
- (id)framesCollectionLeftMaskView;
- (id)framesCollectionRightMaskView;
- (void)setFramesCollectionView:;
- (void)setFramesCollectionLeftMaskView:;
- (void)setFramesCollectionRightMaskView:;
- (void)setVideoRangeSlider:;
- (void)setPrepareWidth:;
- (void)setPauseCallback:;
- (void)setOkCallback:;
- (void)setScrollCallback:;
- (void)setThumbnailDataSource:;
- (void)setVideoCropContainerView:;
- (id)videoCropContainerView;
- (void)setToolbarBgView:;
- (void)onOkAction:;
- (id)toolbarBgView;
- (id)thumbnailDataSource;
- (double)prepareWidth;
- (id)okCallback;
- (id)pauseCallback;
- (id)scrollCallback;
- (void)updateOriginMaterialCurrentPlayTime:;
- (void)updateLivePhotoStatus:;
- (void)setupToolbarBgView;
- (void)setTimeLabelContainer:;
- (id)timeLabelContainer;
- (void)setStaticLivePhotoHintLabel:;
- (id)staticLivePhotoHintLabel;
- (void)setTimeTitleLabel:;
- (id)timeTitleLabel;
- (void)updateTimeTitleLabelWithCurrentTime:totalDuration:;
- (id)generateTextWithDuration:;
- (void)setTimeLabel:;
- (id)delegate;
- (id)timeRange;
- (void)setTimeRange:;
- (id)collectionView:cellForItemAtIndexPath:;
- (id)viewModel;
- (id)initWithFrame:;
- (void)scrollViewDidScroll:;
- (void)scrollViewWillBeginDragging:;
- (void)setTitleLabel:;
- (void)scrollViewDidEndDecelerating:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (id)timeLabel;
- (void)setResumeCallback:;
- (long long)collectionView:numberOfItemsInSection:;
- (void)scrollViewDidEndDragging:willDecelerate:;
- (id)titleLabel;
- (void)reset;
- (void)setDelegate:;
- (void)setOkButton:;
- (id)okButton;
- (id)resumeCallback;
- (void)setupUI;
- (void)setCloseButton:;
- (id)closeButton;
- (id)hintLabel;
- (void)setHintLabel:;
- (id)videoAsset;
- (id)pauseButton;
- (void)setVideoAsset:;
- (void)setPauseButton:;
- (id)initWithFrame:viewModel:;
@end
