@interface AWECloudAlbumPreviewCell : UICollectionViewCell
@property (nonatomic) EcAsset model;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} playFrame;
@property (nonatomic) UIScrollView zoomScrollView;
@property (nonatomic) @? fetchIcloudCompletion;
- (void)configWithModel:;
- (id)zoomScrollView;
- (void)setZoomScrollView:;
- (id)fetchIcloudCompletion;
- (void)resetCell;
- (void)configWithModel:playFrame:;
- (void)setPlayFrame:;
- (id)playFrame;
- (void)setPlayerLayer:withPlayerFrame:;
- (void)removeCoverImageView;
- (BOOL)pauseWithoutShowPauseIcon;
- (void)setFetchIcloudCompletion:;
- (void)setModel:;
- (void)scrollViewDidEndZooming:withView:atScale:;
- (BOOL)isPlaying;
- (BOOL)play;
- (BOOL)isPaused;
- (id)model;
- (void).cxx_destruct;
- (BOOL)stop;
- (BOOL)pause;
@end
