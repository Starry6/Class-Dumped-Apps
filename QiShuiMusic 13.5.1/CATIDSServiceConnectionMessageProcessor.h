@interface CATIDSServiceConnectionMessageProcessor : NSObject
@property (nonatomic) <CATIDSServiceConnectionMessageProcessorDelegate> delegate;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithWorkQueue:connectionIdentifier:;
- (void)receiveMessage:;
@end
