@interface AWEPackFilterAssembleTask : NSObject
@property (nonatomic) AWEPackResponse response;
@property (nonatomic) NSObject<OS_dispatch_queue> managerQueue;
@property (nonatomic) NSObject<OS_dispatch_queue> workerQueue;
@property (nonatomic) @? completion;
@property (nonatomic) AWEPackContext context;
@property (nonatomic) # modelClass;
@property (nonatomic) NSArray filters;
@property (nonatomic) NSArray assemblers;
- (id)assemble:filterReason:;
- (id)assemblers;
- (void)setAssemblers:;
- (id)workerQueue;
- (void)setWorkerQueue:;
- (id)filters;
- (void)setFilters:;
- (id)completion;
- (void)execute;
- (void)setModelClass:;
- (void)setCompletion:;
- (id)response;
- (void)setContext:;
- (void).cxx_destruct;
- (void)setResponse:;
- (id)context;
- (Class)modelClass;
- (id)managerQueue;
- (void)setManagerQueue:;
@end
