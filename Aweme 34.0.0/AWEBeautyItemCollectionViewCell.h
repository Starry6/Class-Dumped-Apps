@interface AWEBeautyItemCollectionViewCell : AWEBeautyCollectionViewCell
@property (nonatomic) UIView downloadStatusIndicatorContainerView;
@property (nonatomic) UIImageView downloadStatusIndicator;
@property (nonatomic) BOOL isSplitlineStatus;
- (void)p_startLoadingAnimation;
- (id)createRotationAnimation;
- (id)downloadStatusIndicatorContainerView;
- (void)p_stopLoadingAnimation;
- (void)setDownloadStatusIndicatorContainerView:;
- (void)updateGrayedOutStatus:;
- (void)updateSplitlineStatus:;
- (id)downloadStatusIndicator;
- (void)setIsSplitlineStatus:;
- (BOOL)isSplitlineStatus;
- (void)setDownloadStatusIndicator:;
- (void)updateBeautyConfig:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateFrames;
- (void)updateDownloadStatus:;
@end
