@interface LynxUIIntersectionObserverManager : NSObject
@property (nonatomic) LynxContext context;
@property (nonatomic) CADisplayLink displayLink;
@property (nonatomic) LynxUIOwner uiOwner;
@property (nonatomic) BOOL enableNewIntersectionObserver;
- (id)uiOwner;
- (void)addIntersectionObserver:;
- (void)addIntersectionObserverToRunLoop;
- (void)destroyIntersectionObserver;
- (BOOL)enableNewIntersectionObserver;
- (id)getObserverById:;
- (id)initWithLynxContext:;
- (void)intersectionObserverHandler:;
- (void)onLynxEvent:event:;
- (void)removeAttachedIntersectionObserver:;
- (void)removeIntersectionObserver:;
- (void)setEnableNewIntersectionObserver:;
- (void)setUiOwner:;
- (id)displayLink;
- (void)setDisplayLink:;
- (id)context;
- (void)removeFromRunLoop;
- (void)notifyObservers;
- (void).cxx_destruct;
- (void)reset;
- (void)setContext:;
- (void)didMoveToWindow:;
@end
