@interface IDSDictionaryInvitationContext : NSObject
@property (nonatomic) NSString schemaIdentifier;
@property (nonatomic) q contextType;
@property (nonatomic) NSDictionary dictionary;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)dictionary;
- (id)payload;
- (id)initWithPayload:;
- (long long)contextType;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)schemaIdentifier;
- (id)initWithDictionary:schema:;
+ (BOOL)supportsSecureCoding;
@end
