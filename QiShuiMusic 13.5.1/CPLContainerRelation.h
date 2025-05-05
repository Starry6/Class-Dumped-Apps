@interface CPLContainerRelation : NSObject
@property (nonatomic) NSString containerIdentifier;
@property (nonatomic) q position;
@property (nonatomic) BOOL keyAsset;
- (void)setPosition:;
- (long long)position;
- (id)containerIdentifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setContainerIdentifier:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setKeyAsset:;
- (BOOL)isKeyAsset;
- (id)proposedScopedIdentifierForItemScopedIdentifier:;
- (id)proposedIdentifierForItemIdentifier:;
+ (BOOL)supportsSecureCoding;
@end
