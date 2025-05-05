@interface NWConcrete_nw_listener : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)handleInbound:addProtocolInbox:;
- (void)handleInboxCancelComplete:;
- (void).cxx_destruct;
- (BOOL)canHandleNewConnection:;
- (id)description;
- (void)handleInboxFailed:error:;
- (void)handleInboundPacket:length:from:to:interface:socket:;
@end
