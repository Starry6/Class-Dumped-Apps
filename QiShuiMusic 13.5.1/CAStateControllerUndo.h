@interface CAStateControllerUndo : NSObject
@property (nonatomic) CAStateControllerUndo next;
@property (nonatomic) CAState state;
@property (nonatomic) NSMutableArray elements;
@property (nonatomic) NSMutableArray transitions;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)next;
- (void)addElement:;
- (void)dealloc;
- (void)setState:;
- (id)elements;
- (void)setElements:;
- (void)addTransition:;
- (id)transitions;
- (id)state;
- (void)setTransitions:;
- (void)willAddLayer:;
@end
