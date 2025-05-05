@interface RTIInputSystemSourceSession : RTIInputSystemSession
@property (nonatomic) Q payloadVersion;
@property (nonatomic) <RTIInputSystemPayloadDelegate> payloadDelegate;
@property (nonatomic) <RTIInputSystemPayloadDelegate> forwardingPayloadDelegate;
@property (nonatomic) RTIDataPayload currentForwardingDataPayload;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)flushOperations;
- (unsigned long long)payloadVersion;
- (id)payloadDelegate;
- (id)sessionIndependentPayloadDelegate;
- (void)setSessionDelegate:;
- (id)forwardingPayloadDelegate;
- (void)handleTextActionPayload:;
- (void)handleForwardingResponseActionPayload:;
- (void).cxx_destruct;
- (void)notifySessionDelegateDidBegin:;
- (void)setForwardingPayloadDelegate:;
- (void)addSessionDelegate:;
- (void)setPayloadDelegate:;
- (id)currentForwardingDataPayload;
@end
