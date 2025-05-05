@interface CAAnimationDelegateBlockHelper : NSObject
@property (nonatomic) @? animationDidStartBlock;
@property (nonatomic) @? animationDidStopBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)animationDidStart:;
- (void)dealloc;
- (void)animationDidStop:finished:;
- (void).cxx_destruct;
- (id)animationDidStopBlock;
- (void)setAnimationDidStopBlock:;
- (id)animationDidStartBlock;
- (void)setAnimationDidStartBlock:;
@end
