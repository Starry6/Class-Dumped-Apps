@interface BDUGLocationStatusFetchTask : NSObject
@property (nonatomic) NSObject<OS_dispatch_semaphore> consumeSem;
@property (nonatomic) NSInteger status;
- (id)consumeSem;
- (void)setConsumeSem:;
- (void)syncFetchStatusWithCompletion:;
- (void)setStatus:;
- (id)initWithCompletion:;
- (void).cxx_destruct;
- (int)status;
@end
