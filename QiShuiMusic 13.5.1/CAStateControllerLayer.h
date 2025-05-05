@interface CAStateControllerLayer : NSObject
@property (nonatomic) CALayer layer;
@property (nonatomic) CAState currentState;
@property (nonatomic) CAStateControllerUndo undoStack;
- (void)setCurrentState:;
- (void)dealloc;
- (id)currentState;
- (void)addTransition:;
- (id)layer;
- (id)initWithLayer:;
- (void)invalidate;
- (void)removeTransition:;
- (id)undoStack;
@end
