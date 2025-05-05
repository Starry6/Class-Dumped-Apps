@interface IESGurdDownloadOperationsQueue : NSObject
@property (nonatomic) NSInteger count;
@property (nonatomic) NSLock countLock;
@property (nonatomic) NSMutableDictionary operationsDictionary;
@property (nonatomic) NSMutableDictionary fastOperationsDictionary;
- (void)addOperation:config:;
- (id)allDownloadModels;
- (void)cancelDownloadWithAccessKey:channel:;
- (id)countLock;
- (id)fastOperationsDictionary;
- (int)getTaskRemain;
- (void)innerAddOperation:;
- (id)operationForAccessKey:channel:;
- (id)operationKeyWithAccessKey:channel:;
- (id)operationKeyWithOperation:;
- (id)operationsDictionary;
- (id)popNextOperation;
- (void)removeOperationWithAccessKey:channel:;
- (void)setCountLock:;
- (void)setFastOperationsDictionary:;
- (void)setOperationsDictionary:;
- (void)updateDownloadPriority:operation:;
- (BOOL)validateDownloadPriority:;
- (void)setCount:;
- (void).cxx_destruct;
- (int)count;
+ (id)operationsQueue;
@end
