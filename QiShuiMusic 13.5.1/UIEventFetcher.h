@interface UIEventFetcher : NSObject
- (id)init;
- (void)displayLinkDidFire:;
- (void).cxx_destruct;
- (void)_receiveHIDEvent:;
- (void)threadMain;
- (void)resendDragMoveEventsOnTimer:withInterval:;
@end
