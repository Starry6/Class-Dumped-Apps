@interface MRRemoveClientMessage : MRProtocolMessage
@property (nonatomic) MRClient client;
- (id)initWithClient:;
- (unsigned long long)type;
- (id)client;
@end
