@interface MuxNotificationSink : NSProxy
@property (nonatomic) <MuxNotificationSinkDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDelegate:;
- (id)methodSignatureForSelector:;
- (id)delegate;
- (void)clientDidTriggerFault:;
- (void).cxx_destruct;
- (void)forwardInvocation:;
@end
