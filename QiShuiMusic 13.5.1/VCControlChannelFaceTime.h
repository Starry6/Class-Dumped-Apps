@interface VCControlChannelFaceTime : VCControlChannel
- (void)dealloc;
- (id)initWithCallID:reportingAgent:;
- (BOOL)sendReliableMessageAndWait:withTopic:;
- (void)sendReliableMessage:withTopic:;
@end
