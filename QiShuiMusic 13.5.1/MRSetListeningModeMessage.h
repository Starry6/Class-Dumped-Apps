@interface MRSetListeningModeMessage : MRProtocolMessage
@property (nonatomic) NSString listeningMode;
@property (nonatomic) NSString outputDeviceUID;
- (id)listeningMode;
- (id)outputDeviceUID;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)initWithUnderlyingCodableMessage:error:;
- (id)initWithListeningMode:outputDeviceUID:;
@end
