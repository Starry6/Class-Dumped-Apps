@interface CPDistributedMessagingAsyncOperation : NSOperation
- (void)dealloc;
- (void)main;
- (void)_performCallout;
- (id)initWithCenter:messageName:userInfoData:oolKey:oolData:target:selector:context:makeServer:;
- (void)_releaseSendingData;
@end
