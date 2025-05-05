@interface MRSetConnectionStateMessage : MRProtocolMessage
@property (nonatomic) I state;
- (unsigned long long)type;
- (unsigned int)state;
- (id)initWithConnectionState:;
- (unsigned long long)encryptionType;
@end
