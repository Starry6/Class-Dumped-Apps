@interface AWEIMBulletQuoteReplyComponent : AWEIMFlexComponent
@property (nonatomic) BOOL hasObserveIESIMFeedMediaAvailable;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)p_addObserver;
- (void)onAwemeAvailableStatusChange:conversationID:extraInfo:msg:itemID:;
- (void)p_didClickCover;
- (BOOL)hasObserveIESIMFeedMediaAvailable;
- (void)setHasObserveIESIMFeedMediaAvailable:;
- (void)dealloc;
+ (BOOL)canCreateComponentWithContext:;
@end
