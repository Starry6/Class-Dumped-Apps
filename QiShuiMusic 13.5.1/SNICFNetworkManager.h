@interface SNICFNetworkManager : NSObject
@property (nonatomic) NSMutableDictionary tasks;
@property (nonatomic) NSLock lock;
- (void)removeTaskWithUUID:;
- (void)sendAsynchronousRequest:completionHandler:;
- (id)init;
- (id)lock;
- (void).cxx_destruct;
- (void)setLock:;
- (id)tasks;
- (void)setTasks:;
- (void)sendRequest:completionHandler:;
+ (id)sharedInstance;
@end
