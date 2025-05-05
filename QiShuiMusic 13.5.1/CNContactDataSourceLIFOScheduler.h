@interface CNContactDataSourceLIFOScheduler : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) NSMutableArray stack;
@property (nonatomic) double timestamp;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void)performBlock:qualityOfService:;
- (id)performCancelableBlock:qualityOfService:;
- (id)performCancelableBlock:;
- (id)afterDelay:performBlock:qualityOfService:;
- (id)stack;
- (void).cxx_destruct;
- (double)timestamp;
- (id)afterDelay:performBlock:;
- (void)performBlock:;
- (id)queue;
@end
