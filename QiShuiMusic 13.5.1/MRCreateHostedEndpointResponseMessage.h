@interface MRCreateHostedEndpointResponseMessage : MRProtocolMessage
@property (nonatomic) NSString groupUID;
- (id)groupUID;
- (unsigned long long)type;
- (id)initWithGroupUID:;
@end
