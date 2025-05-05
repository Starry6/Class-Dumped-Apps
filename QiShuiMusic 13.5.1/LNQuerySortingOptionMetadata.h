@interface LNQuerySortingOptionMetadata : NSObject
@property (nonatomic) LNStaticDeferredLocalizedString title;
@property (nonatomic) NSString propertyIdentifier;
@property (nonatomic) NSString entityType;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)title;
- (void).cxx_destruct;
- (id)entityType;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)propertyIdentifier;
- (id)initWithPropertyIdentifier:entityType:;
- (id)initWithTitle:propertyIdentifier:entityType:;
+ (BOOL)supportsSecureCoding;
@end
