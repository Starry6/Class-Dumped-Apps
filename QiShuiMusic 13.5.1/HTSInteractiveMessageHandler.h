@interface HTSInteractiveMessageHandler : HTSLiveMessageHandler
@property (nonatomic) <HTSInteractiveControlProtocol> delegate;
- (void)handleMessage:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithDelegate:;
@end
