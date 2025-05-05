@interface INRideFareLineItem : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSDecimalNumber price;
@property (nonatomic) NSString currencyCode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_dictionaryRepresentation;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)currencyCode;
- (void)encodeWithCoder:;
- (id)title;
- (id)descriptionAtIndent:;
- (void).cxx_destruct;
- (id)description;
- (id)price;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithTitle:price:currencyCode:;
+ (BOOL)supportsSecureCoding;
@end
