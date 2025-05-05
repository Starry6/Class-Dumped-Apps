@interface BDLocateTask : NSObject
@property (nonatomic) NSString requestID;
@property (nonatomic) q desiredAccuracy;
- (BOOL)bindCompletion:timeoutCompletion:;
- (void)cancel;
- (long long)desiredAccuracy;
- (id)requestID;
- (void).cxx_destruct;
- (void)setDesiredAccuracy:;
- (void)requestLocation;
- (void)setRequestID:;
@end
