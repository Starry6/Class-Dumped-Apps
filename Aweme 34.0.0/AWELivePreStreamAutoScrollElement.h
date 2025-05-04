@interface AWELivePreStreamAutoScrollElement : AWELiveBusinessBaseElement
@property (nonatomic) BOOL hasRoomEntered;
@property (nonatomic) BOOL hasScrollUpInnerFeed;
- (void)initializeElement;
- (void)onUserEnterLiveRoom:;
- (void)viewController_viewWillDisAppear;
- (void)setHasScrollUpInnerFeed:;
- (void)onUserQuitLiveRoom_afterLiveCheck;
- (BOOL)hasRoomEntered;
- (BOOL)hasScrollUpInnerFeed;
- (void)p_scrollToNextContent;
- (void)setHasRoomEntered:;
- (void)reset;
+ (BOOL)shouldActivateElement;
@end
