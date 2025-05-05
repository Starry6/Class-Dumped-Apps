@interface AVOutputContextCommunicationChannel : NSObject
@property (nonatomic) r^{__CFString=} commChannelUUID;
@property (nonatomic) <AVOutputContextCommunicationChannelImpl> impl;
- (id)init;
- (void)dealloc;
- (id)impl;
- (void)sendData:completionHandler:;
- (id)initWithOutputContextCommunicationChannelImpl:;
- (id)commChannelUUID;
@end
