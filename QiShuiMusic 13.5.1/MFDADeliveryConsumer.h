@interface MFDADeliveryConsumer : MFDAMailAccountConsumer
@property (nonatomic) MFError error;
@property (nonatomic) q status;
@property (nonatomic) Q bytesRead;
@property (nonatomic) Q bytesWritten;
- (void)setError:;
- (id)error;
- (void).cxx_destruct;
- (long long)status;
- (unsigned long long)bytesWritten;
- (unsigned long long)bytesRead;
- (void)actionFailed:forTask:error:;
- (void)messageDidSendWithContext:sentBytesCount:receivedBytesCount:;
@end
