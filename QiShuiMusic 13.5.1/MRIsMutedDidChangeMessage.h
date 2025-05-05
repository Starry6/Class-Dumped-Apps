@interface MRIsMutedDidChangeMessage : MRProtocolMessage
@property (nonatomic) BOOL muted;
@property (nonatomic) NSString outputDeviceUID;
- (BOOL)isMuted;
- (id)outputDeviceUID;
- (unsigned long long)type;
- (id)initWithIsMuted:outputDeviceUID:;
@end
