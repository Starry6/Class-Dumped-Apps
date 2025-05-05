@interface LAUIAnimationDelegate : NSObject
@property (nonatomic) @? didStartHandler;
@property (nonatomic) @? didStopHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)animationDidStart:;
- (void)dealloc;
- (void)animationDidStop:finished:;
- (void).cxx_destruct;
- (id)didStartHandler;
- (void)setDidStartHandler:;
- (void)setDidStopHandler:;
- (id)didStopHandler;
@end
