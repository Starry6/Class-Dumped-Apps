@interface CAStateController : NSObject
@property (nonatomic) CALayer layer;
@property (nonatomic) NSObject<CAStateControllerDelegate> delegate;
- (void)dealloc;
- (void)cancelTimers;
- (void)_applyTransitionElement:layer:undo:speed:;
- (void)setDelegate:;
- (id)layer;
- (void)setState:ofLayer:transitionSpeed:;
- (void)setState:ofLayer:;
- (id)initWithLayer:;
- (void)_nextStateTimer:;
- (void)setInitialStatesOfLayer:;
- (id)delegate;
- (void)_removeTransition:layer:;
- (void)restoreStateChanges:;
- (id)removeAllStateChanges;
- (void)_addAnimation:forKey:target:undo:;
- (void)setInitialStatesOfLayer:transitionSpeed:;
- (void)_applyTransition:layer:undo:speed:;
- (id)stateOfLayer:;
@end
