@interface NSBlockOperation : NSOperation
@property (nonatomic) NSArray executionBlocks;
- (id)init;
- (void)dealloc;
- (id)executionBlocks;
- (id)initWithBlock:;
- (void)addExecutionBlock:;
- (void)main;
+ (id)blockOperationWithBlock:;
@end
