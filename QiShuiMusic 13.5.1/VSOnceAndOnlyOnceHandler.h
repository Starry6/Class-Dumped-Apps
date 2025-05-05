@interface VSOnceAndOnlyOnceHandler : NSObject
@property (nonatomic) @? block;
- (id)block;
- (void)dealloc;
- (void)invoke;
- (void).cxx_destruct;
- (void)setBlock:;
@end
