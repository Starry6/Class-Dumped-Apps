@interface INCurrencyAmount : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSDecimalNumber amount;
@property (nonatomic) NSString currencyCode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_intents_readableTitleWithLocalizer:metadata:;
- (id)_dictionaryRepresentation;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)currencyCode;
- (void)encodeWithCoder:;
- (BOOL)_intents_compareValue:relation:;
- (id)descriptionAtIndent:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)amount;
- (id)initWithAmount:currencyCode:;
+ (BOOL)supportsSecureCoding;
@end
