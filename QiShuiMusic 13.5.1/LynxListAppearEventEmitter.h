@interface LynxListAppearEventEmitter : NSObject
@property (nonatomic) LynxEventEmitter emitter;
- (id)eventKeyForUI:atIndexPath:;
- (id)eventWithName:ui:key:position:;
- (id)initWithEmitter:;
- (void)onCellAppear:atIndexPath:;
- (void)onCellDisappear:atIndexPath:;
- (void)setListUI:;
- (void)flush;
- (void).cxx_destruct;
- (id)emitter;
- (void)invalidate;
- (void)startTimerIfNeeded;
@end
