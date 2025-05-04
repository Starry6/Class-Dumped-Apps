@interface AWEAwemeShowEntCommentVideoContinueController : AWEAwemeFeedBaseController
@property (nonatomic) BOOL isVideoPlayerPlaying;
@property (nonatomic) NSMutableArray subscriberArray;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cellViewControllerDidRenderFirstFrame:;
- (void)currentPlayVideoDidChangePlayState:;
- (id)subscriberArray;
- (void)setSubscriberArray:;
- (BOOL)isVideoPlayerPlaying;
- (void)setIsVideoPlayerPlaying:;
- (BOOL)enableContinueVideoPlay;
- (void)p_bindEvent;
- (void)p_unbindEvent;
- (id)p_registerEvent:callback:;
- (void)dealloc;
- (void)viewDidLoad;
- (void).cxx_destruct;
@end
