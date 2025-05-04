@interface AWERLTransition : NSObject
@property (nonatomic) double opacity;
@property (nonatomic) Q type;
@property (nonatomic) @? completion;
- (void)transit:animation:transitionType:;
- (double)opacity;
- (void)setOpacity:;
- (id)init;
- (id)completion;
- (void)setCompletion:;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
+ (id)defaultTransiton;
@end
