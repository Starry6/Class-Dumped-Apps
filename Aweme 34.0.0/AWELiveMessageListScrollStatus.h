@interface AWELiveMessageListScrollStatus : NSObject
@property (nonatomic) BOOL messageListScrolling;
@property (nonatomic) BOOL slideEnableScroll;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)messageListScrolling;
- (void)setMessageListScrolling:;
- (void)messageListViewWillBeginDragging:;
- (void)messageListViewDidEndDragging:willDecelerate:;
- (void)messageListViewDidEndDecelerating:;
- (void)messageListViewReachBottom;
- (void)messageListStateReset;
- (void)receiveTouch;
- (BOOL)slideEnableScroll;
- (void)setSlideEnableScroll:;
- (id)init;
@end
