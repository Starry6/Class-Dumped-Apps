@interface INBalanceAmount : NSObject
@property (nonatomic) NSDecimalNumber amount;
@property (nonatomic) q balanceType;
@property (nonatomic) NSString currencyCode;
- (id)_intents_readableTitleWithLocalizer:metadata:;
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
- (id)amount;
- (id)initWithAmount:currencyCode:;
- (id)initWithAmount:balanceType:;
- (id)initWithAmount:balanceType:currencyCode:;
- (long long)balanceType;
+ (BOOL)supportsSecureCoding;
@end
