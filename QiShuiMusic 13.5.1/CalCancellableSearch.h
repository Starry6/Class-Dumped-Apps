@interface CalCancellableSearch : NSObject
@property (nonatomic) @? cancellationBlock;
- (void)setCancellationBlock:;
- (void)cancel;
- (void).cxx_destruct;
- (id)cancellationBlock;
- (id)initWithCancellationBlock:;
@end
