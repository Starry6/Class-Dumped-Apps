@interface AFSiriTaskExecution : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void)start;
- (void)setCompletionHandler:;
- (BOOL)listener:shouldAcceptNewConnection:;
- (void).cxx_destruct;
- (void)_completeWithError:;
- (void)handleFailureOfRequest:error:atTime:;
- (void)handleSiriResponse:atTime:;
- (id)initWithRequest:taskDeliverer:usageResultListener:;
- (void)setDeliveryHandler:;
- (void)_completeWithResponse:error:;
- (void)_completeWithResponse:;
@end
