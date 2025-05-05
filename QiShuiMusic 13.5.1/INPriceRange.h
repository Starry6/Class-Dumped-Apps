@interface INPriceRange : NSObject
@property (nonatomic) NSDecimalNumber minimumPrice;
@property (nonatomic) NSDecimalNumber maximumPrice;
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
- (id)descriptionAtIndent:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)maximumPrice;
- (id)minimumPrice;
- (id)initWithRangeBetweenPrice:andPrice:currencyCode:;
- (id)initWithMaximumPrice:currencyCode:;
- (id)initWithMinimumPrice:currencyCode:;
- (id)initWithPrice:currencyCode:;
- (id)_formattedStringWithLocale:componentsFormatString:;
+ (BOOL)supportsSecureCoding;
+ (id)_priceWithPriceRangeValue:;
@end
