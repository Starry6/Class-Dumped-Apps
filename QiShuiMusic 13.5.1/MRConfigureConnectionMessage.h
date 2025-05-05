@interface MRConfigureConnectionMessage : MRProtocolMessage
@property (nonatomic) NSString groupID;
- (void)setGroupID:;
- (id)groupID;
- (unsigned long long)type;
- (id)initWithUnderlyingCodableMessage:error:;
- (id)initWithGroupID:;
@end
