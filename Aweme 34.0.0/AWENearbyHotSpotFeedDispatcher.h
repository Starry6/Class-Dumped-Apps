@interface AWENearbyHotSpotFeedDispatcher : AWEBaseController
@property (nonatomic) <AWENearbyHotSpotFeedDispatcherDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onScrollViewWillBeginDragging:;
- (void)onScrollDidEndWithIndexPath:;
- (void)onScrollWillChangeVideo:index:directTop:;
- (void)onScrollBackToIndex:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
