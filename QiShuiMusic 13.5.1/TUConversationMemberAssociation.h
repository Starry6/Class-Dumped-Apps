@interface TUConversationMemberAssociation : NSObject
@property (nonatomic) q type;
@property (nonatomic) TUHandle handle;
@property (nonatomic) BOOL primary;
@property (nonatomic) Q identifier;
@property (nonatomic) NSString avcIdentifier;
- (void)setPrimary:;
- (BOOL)isPrimary;
- (id)handle;
- (void)setHandle:;
- (unsigned long long)identifier;
- (void)setType:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (long long)type;
- (void).cxx_destruct;
- (id)description;
- (void)setIdentifier:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)avcIdentifier;
- (void)setAvcIdentifier:;
- (id)initWithMemberAssociation:;
- (id)initWithHandle:type:primary:;
- (BOOL)isEqualToAssociation:;
+ (BOOL)supportsSecureCoding;
@end
