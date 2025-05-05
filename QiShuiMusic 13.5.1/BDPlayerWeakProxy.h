@interface BDPlayerWeakProxy : NSObject
@property (nonatomic) BDAnimatedImagePlayer target;
- (id)initWithTarget:;
- (void)setTarget:;
- (void).cxx_destruct;
- (id)target;
- (void)nextFrame;
@end
