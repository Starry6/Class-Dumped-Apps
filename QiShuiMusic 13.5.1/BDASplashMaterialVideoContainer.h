@interface BDASplashMaterialVideoContainer : BDASplashMaterialBaseView
@property (nonatomic) BDASplashMaterialVideoView videoView;
@property (nonatomic) BOOL hasPlayed;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithFrame:delegate:viewModel:;
- (void)loadResource;
- (void)setHasPlayed:;
- (id)splashVideoQualityCommonParams;
- (void)splashVideoView:playStatus:extraInfo:;
- (void)trackAdEvent:adExtra:;
- (void)trackNoAdEvent:params:;
- (id)videoDurationParams;
- (void)setVideoView:;
- (BOOL)stop;
- (double)videoDuration;
- (void).cxx_destruct;
- (id)videoView;
- (void)setupViews;
- (BOOL)hasPlayed;
@end
