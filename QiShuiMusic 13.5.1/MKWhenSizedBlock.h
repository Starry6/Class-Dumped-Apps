@interface MKWhenSizedBlock : NSObject
@property (nonatomic) q type;
@property (nonatomic) @? block;
@property (nonatomic) @? completion;
@property (nonatomic) BOOL shouldRun;
- (id)completion;
- (id)block;
- (void)setCompletion:;
- (void)setType:;
- (long long)type;
- (void).cxx_destruct;
- (BOOL)shouldRun;
- (void)setBlock:;
- (void)perform;
- (id)initWithType:block:;
- (id)initWithType:block:completion:;
- (void)setShouldRun:;
@end
