@interface AVFigCommChannelUUIDOutputContextCommunicationChannelImpl : NSObject
@property (nonatomic) ^{__CFString=} commChannelUUID;
@property (nonatomic) AVOutputContextCommunicationChannel parentCommunicationChannel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)sendData:completionHandler:;
- (id)parentCommunicationChannel;
- (void)setParentCommunicationChannel:;
- (id)initWithRoutingContext:commChannelUUID:;
- (id)commChannelUUID;
@end
