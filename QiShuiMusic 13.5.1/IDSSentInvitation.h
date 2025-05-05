@interface IDSSentInvitation : IDSInvitation
@property (nonatomic) <IDSDestinationProtocol> destination;
- (void)setState:;
- (id)destination;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (void)setContext:;
- (BOOL)isEqual:;
- (id)initWithDestination:state:expirationDate:uniqueID:context:;
- (void)setSenderMergeID:;
+ (BOOL)supportsSecureCoding;
@end
