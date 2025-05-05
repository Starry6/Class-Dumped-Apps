@interface BFExecutor : NSObject
@property (nonatomic) @? block;
- (id)block;
- (id)initWithBlock:;
- (void)execute:;
- (void).cxx_destruct;
- (void)setBlock:;
+ (id)executorWithBlock:;
+ (id)executorWithDispatchQueue:;
+ (id)executorWithOperationQueue:;
+ (id)immediateExecutor;
+ (id)mainThreadExecutor;
+ (id)defaultExecutor;
@end
