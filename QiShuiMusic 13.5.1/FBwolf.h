@interface FBwolf : NSObject
@property (nonatomic) NSURLSessionTask task;
@property (nonatomic) @ moduleModel;
@property (nonatomic) @ dycModule;
@property (nonatomic) BOOL cancelled;
@property (nonatomic) NSError error;
@property (nonatomic) NSMutableArray retryTasks;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setModuleModel:;
- (id)dycModule;
- (id)initWithURLTask:;
- (id)moduleModel;
- (id)retryTasks;
- (void)setDycModule:;
- (void)setRetryTasks:;
- (void)setCancelled:;
- (void)cancel;
- (BOOL)isCancelled;
- (void)setError:;
- (id)task;
- (id)error;
- (void)setTask:;
- (void).cxx_destruct;
@end
