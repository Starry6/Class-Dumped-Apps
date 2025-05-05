@interface CATBlockCancellable : NSObject
@property (nonatomic) @? cancellationBlock;
- (void)setCancellationBlock:;
- (id)init;
- (void)cancel;
- (void).cxx_destruct;
- (id)cancellationBlock;
- (id)initWithCancellationBlock:;
- (id)initWithCancellables:;
@end
