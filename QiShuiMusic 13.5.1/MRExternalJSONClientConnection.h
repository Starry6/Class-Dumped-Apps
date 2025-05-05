@interface MRExternalJSONClientConnection : MRExternalClientConnection
- (void).cxx_destruct;
- (id)initWithConnection:;
- (id)dataForMessage:;
- (id)_protocolMessageFromData:;
- (id)_processDeviceInfo:;
- (id)_encodeDeviceInfo:;
- (id)_processSetState:;
- (id)_encodeVolumeDidChange:;
- (id)_createProtocolMessage:underlyingCodableMessage:;
@end
