@interface AWERLAnimationRequest : NSObject
@property (nonatomic) NSObject<AWERLComponentProtocol> component;
@property (nonatomic) <AWERLVirtualNodeAnimationProtocol> animator;
@property (nonatomic) @? from;
@property (nonatomic) @? to;
@property (nonatomic) @? start;
@property (nonatomic) @? completion;
- (void)setStart:;
- (id)animator;
- (id)completion;
- (void)setAnimator:;
- (id)component;
- (void)setCompletion:;
- (void).cxx_destruct;
- (id)start;
- (void)setFrom:;
- (void)setComponent:;
- (id)from;
- (void)setTo:;
- (id)to;
@end
