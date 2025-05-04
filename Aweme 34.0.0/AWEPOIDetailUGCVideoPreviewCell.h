@interface AWEPOIDetailUGCVideoPreviewCell : UICollectionViewCell
@property (nonatomic) AWEPOIDetailUGCVideoPlayerView playerView;
@property (nonatomic) <AWEPOIDetailUGCVideoPreviewCellDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) AWEPOIDetailPhotosPreviewBaseViewController vc;
- (id)zoomTransitionEndView;
- (void)updateWithPhotoInfo:;
- (void)playerSeekTo:;
- (void)videoDidPlay:;
- (void)playerViewDidTap:;
- (BOOL)enableLoopPlay;
- (id)delegate;
- (void)prepareForReuse;
- (void)setMute:;
- (void)setPlayerView:;
- (id)playerView;
- (void)didAppear;
- (void).cxx_destruct;
- (void)willDisappear;
- (double)videoDuration;
- (long long)playerState;
- (void)setDelegate:;
- (void)setupUI;
- (id)vc;
- (void)setVc:;
@end
