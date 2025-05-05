@interface BDUGLocServiceFetchTask : NSObject
@property (nonatomic) NSObject<OS_dispatch_semaphore> consumeSem;
@property (nonatomic) BOOL locServiceEnabled;
- (id)consumeSem;
- (BOOL)locServiceEnabled;
- (void)setConsumeSem:;
- (void)setLocServiceEnabled:;
- (void)syncFetchStatusWithCompletion:;
- (id)initWithCompletion:;
- (void).cxx_destruct;
@end
