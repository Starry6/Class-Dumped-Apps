@interface ASCLockupMediaPresenter : NSObject
@property (nonatomic) <ASCLockupMediaPresenterView> view;
@property (nonatomic) ASCPresenterContext context;
@property (nonatomic) ASCLockup lockup;
@property (nonatomic) ASCPendingPromises pendingArtworkPromises;
@property (nonatomic) <ASCLockupMediaPresenterObserver> observer;
@property (nonatomic) <ASCLockupMediaPresenterBackgroundView> backgroundView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)backgroundView;
- (void)dealloc;
- (id)context;
- (id)view;
- (void)setObserver:;
- (void).cxx_destruct;
- (void)setBackgroundView:;
- (void)viewDidLayoutSubviews;
- (id)observer;
- (id)lockup;
- (void)setLockup:;
- (void)lockupPresenterDidChange:;
- (id)initWithView:lockupPresenter:;
- (void)videoView:videoStateDidChange:;
- (id)initWithView:lockupPresenter:context:;
- (id)videoViewForLockup:;
- (id)artworkForLockup:;
- (void)performScreenshotsFetch;
- (void)performFollowUpWork:;
- (void)screenshotArtwork:didFetchImage:atIndex:;
- (void)screenshotArtwork:didFailFetchWithError:atIndex:;
- (id)pendingArtworkPromises;
+ (id)log;
@end
