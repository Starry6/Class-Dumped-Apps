@interface IESLiveComponentReleaseObserver : NSObject
@property (nonatomic) @? block;
- (id)initWithDeallocBlock:;
- (id)block;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setBlock:;
+ (id)observerWithBlock:;
@end
