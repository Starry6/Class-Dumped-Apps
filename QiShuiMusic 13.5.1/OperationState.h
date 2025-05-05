@interface OperationState : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) BOOL operationCancelled;
@property (nonatomic) NSInteger operationRefcount;
- (BOOL)cancelled;
- (void)end;
- (id)init;
- (void)cancel;
- (void).cxx_destruct;
- (void)setQueue:;
- (BOOL)begin;
- (id)queue;
- (BOOL)operationCancelled;
- (void)setOperationCancelled:;
- (int)operationRefcount;
- (void)setOperationRefcount:;
@end
