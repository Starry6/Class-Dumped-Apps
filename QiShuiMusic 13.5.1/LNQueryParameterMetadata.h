@interface LNQueryParameterMetadata : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString propertyIdentifier;
@property (nonatomic) LNStaticDeferredLocalizedString localizedTitle;
@property (nonatomic) NSArray comparators;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)title;
- (void).cxx_destruct;
- (id)localizedTitle;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)comparators;
- (id)propertyIdentifier;
- (id)initWithPropertyIdentifier:localizedTitle:comparators:;
- (id)initWithPropertyIdentifier:title:comparators:;
+ (BOOL)supportsSecureCoding;
@end
