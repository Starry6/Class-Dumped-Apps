@interface INRidePartySizeOption : NSObject
@property (nonatomic) {_NSRange=QQ} partySizeRange;
@property (nonatomic) NSString sizeDescription;
@property (nonatomic) INPriceRange priceRange;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_dictionaryRepresentation;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)descriptionAtIndent:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)priceRange;
- (id)partySizeRange;
- (id)sizeDescription;
- (id)initWithPartySizeRange:sizeDescription:priceRange:;
+ (BOOL)supportsSecureCoding;
@end
