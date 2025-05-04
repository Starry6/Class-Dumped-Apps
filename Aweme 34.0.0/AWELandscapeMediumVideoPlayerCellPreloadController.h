@interface AWELandscapeMediumVideoPlayerCellPreloadController : NSObject
@property (nonatomic) q scheduledPreloadIndex;
@property (nonatomic) AWELandscapeFeedViewController viewController;
@property (nonatomic) AWEMediumVideoPreloadManager videoPreloadManager;
@property (nonatomic) BOOL enableVideoPreload;
@property (nonatomic) BOOL lastPreloadCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)enableVideoPreload;
- (id)videoPreloadManager;
- (void)setScheduledPreloadIndex:;
- (long long)scheduledPreloadIndex;
- (void)setupVideoPreload;
- (void)setVideoPreloadManager:;
- (void)setLastPreloadCount:;
- (BOOL)lastPreloadCount;
- (void)resumePreloadStrategy;
- (void)pausePreloadStrategy;
- (void)setEnableVideoPreload:;
- (id)initWithViewController:;
- (void)play;
- (id)viewController;
- (void).cxx_destruct;
- (void)stop;
- (void)setViewController:;
@end
