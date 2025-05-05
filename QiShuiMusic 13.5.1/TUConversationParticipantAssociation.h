@interface TUConversationParticipantAssociation : NSObject
@property (nonatomic) Q identifier;
@property (nonatomic) NSString avcIdentifier;
- (unsigned long long)identifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (void)setIdentifier:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)avcIdentifier;
- (void)setAvcIdentifier:;
- (id)initWithParticipantAssociation:;
- (BOOL)isEqualToParticipantAssociation:;
- (id)queryItemsWithNamePrefix:;
- (id)identifierQueryItemWithNamePrefix:;
- (id)avcIdentifierQueryItemWithNamePrefix:;
+ (BOOL)supportsSecureCoding;
+ (id)participantAssociationFromURLComponents:namePrefix:;
+ (id)identifierFromURLComponents:namePrefix:;
+ (id)queryItemName:prefix:;
+ (id)avcIdentifierFromURLComponents:namePrefix:;
@end
