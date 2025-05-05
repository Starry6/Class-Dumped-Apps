@interface NWRemotePacketProxy : NSObject
@property (nonatomic) NSObject<NWRemotePacketProxyDelegate> delegate;
@property (nonatomic) NSMutableArray writeRequests;
@property (nonatomic) ^{nw_protocol=[16C]^{nw_protocol_identifier}^{nw_protocol_callbacks}^{nw_protocol}^v^{nw_protocol}^v} packetProtocol;
@property (nonatomic) ^{nw_protocol=[16C]^{nw_protocol_identifier}^{nw_protocol_callbacks}^{nw_protocol}^v^{nw_protocol}^v} defaultOutputHandler;
@property (nonatomic) ^{nw_hash_table=} packetHashTable;
@property (nonatomic) ^{nw_protocol=[16C]^{nw_protocol_identifier}^{nw_protocol_callbacks}^{nw_protocol}^v^{nw_protocol}^v} protocol;
@property (nonatomic) I receiveWindowPacketCount;
- (id)protocol;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithDelegate:;
- (void)setReceiveWindowPacketCount:;
- (id)outputHandlerForPacket:inbound:;
- (void)setDefaultOutputProtocolHandler:;
- (void)setOutputProtocolHandler:local:remote:ipProtocol:;
- (BOOL)receiveRemotePacket:;
- (unsigned int)receiveWindowPacketCount;
- (id)writeRequests;
- (void)setWriteRequests:;
- (id)packetProtocol;
- (void)setPacketProtocol:;
- (id)defaultOutputHandler;
- (void)setDefaultOutputHandler:;
- (id)packetHashTable;
- (void)setPacketHashTable:;
@end
