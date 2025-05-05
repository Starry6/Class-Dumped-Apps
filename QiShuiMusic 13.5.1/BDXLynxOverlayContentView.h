@interface BDXLynxOverlayContentView : UIView
@property (nonatomic) LynxEventHandler eventHandler;
@property (nonatomic) BOOL eventsPassThrough;
@property (nonatomic) <BDXLynxOverlayContentViewDelegate> delegate;
- (void)ensureEventHandler;
- (BOOL)eventsPassThrough;
- (void)handleEdgePanGesture:;
- (void)setEventsPassThrough:;
- (void)setDelegate:;
- (void)setEventHandler:;
- (id)hitTest:withEvent:;
- (id)eventHandler;
- (id)delegate;
- (void).cxx_destruct;
@end
