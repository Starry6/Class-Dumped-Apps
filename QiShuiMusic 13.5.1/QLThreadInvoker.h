@interface QLThreadInvoker : NSObject
- (void).cxx_destruct;
- (id)initWithConnection:data:error:;
- (void)connectionDidReceiveData:;
- (void)connectionDidReceiveDataLengthReceived:;
- (void)connectionDidFailWithError:;
@end
