@interface AVFigCommChannelUUIDCommunicationChannelManager : NSObject
@property (nonatomic) AVFigRoutingContextOutputContextImpl parentOutputContextImpl;
@property (nonatomic) AVOutputContextCommunicationChannel outgoingCommunicationChannel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void)_didReceiveData:fromCommChannelUUID:;
- (id)outgoingCommunicationChannel;
- (id)openCommunicationChannelWithOptions:error:;
- (id)parentOutputContextImpl;
- (void).cxx_destruct;
- (id)initWithRoutingContext:;
- (void)didCloseCommChannelUUID:;
- (void)setParentOutputContextImpl:;
@end
