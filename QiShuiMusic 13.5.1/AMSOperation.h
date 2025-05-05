@interface AMSOperation : NSOperation
@property (nonatomic) AMSOperation parentOperation;
@property (nonatomic) AMSBinaryPromise promise;
@property (nonatomic) BOOL success;
@property (nonatomic) NSError error;
- (id)init;
- (void)cancel;
- (BOOL)isCancelled;
- (void)setError:;
- (id)error;
- (BOOL)success;
- (void)unlock;
- (void)setSuccess:;
- (void)run;
- (void)lock;
- (void)main;
- (id)promise;
- (void).cxx_destruct;
- (id)parentOperation;
- (void)setParentOperation:;
- (void)runSubOperation:;
- (void)runSubOperation:onQueue:;
@end
