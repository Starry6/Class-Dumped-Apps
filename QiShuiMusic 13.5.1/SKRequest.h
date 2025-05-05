@interface SKRequest : NSObject
@property (nonatomic) SKPaymentQueueClient paymentQueueClient;
@property (nonatomic) <SKRequestDelegate> delegate;
- (id)init;
- (void)cancel;
- (void)start;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)_start;
- (void)setPaymentQueueClient:;
- (void)_beginBackgroundTask;
- (void)_endBackgroundTask;
- (void)_shutdownRequest;
- (id)paymentQueueClient;
- (id)errorFromCFObject:;
- (void)_startWithMessage:replyBlock:;
@end
