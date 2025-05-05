@interface SSVOperation : NSOperation
@property (nonatomic) BOOL success;
@property (nonatomic) NSError error;
- (id)init;
- (void)cancel;
- (void)setError:;
- (void)dispatchAsync:;
- (id)error;
- (BOOL)success;
- (void)setSuccess:;
- (void).cxx_destruct;
- (void)dispatchSync:;
- (void)addChildRequest:;
- (void)removeChildRequest:;
- (void)runChildOperation:;
@end
