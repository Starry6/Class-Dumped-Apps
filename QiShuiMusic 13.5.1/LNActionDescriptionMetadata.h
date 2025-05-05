@interface LNActionDescriptionMetadata : NSObject
@property (nonatomic) LNStaticDeferredLocalizedString descriptionText;
@property (nonatomic) LNDisplayRepresentation categoryName;
@property (nonatomic) NSArray searchKeywords;
- (id)descriptionText;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)categoryName;
- (id)initWithDescriptionText:categoryName:searchKeywords:;
- (id)searchKeywords;
+ (BOOL)supportsSecureCoding;
@end
