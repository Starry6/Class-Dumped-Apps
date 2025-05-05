@interface MLE5ExecutionStreamPool : NSObject
@property (nonatomic) NSMutableSet pool;
@property (nonatomic) NSObject<OS_dispatch_queue> serialQueue;
- (id)init;
- (id)serialQueue;
- (void).cxx_destruct;
- (id)pool;
- (id)takeOut;
- (void)putBack:;
@end
