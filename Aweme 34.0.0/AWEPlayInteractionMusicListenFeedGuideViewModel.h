@interface AWEPlayInteractionMusicListenFeedGuideViewModel : NSObject
@property (nonatomic) AWEPlayInteractionContext context;
- (BOOL)enableEnterListenFeed;
- (BOOL)shouldShowListenFeedCoverWithAweme:;
- (void)trackForListenFeedCoverClick;
- (void)trackForListenFeedCoverShow;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end
