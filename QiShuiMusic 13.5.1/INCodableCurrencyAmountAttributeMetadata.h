@interface INCodableCurrencyAmountAttributeMetadata : INCodableNumberAttributeMetadata
@property (nonatomic) NSString currencyCode;
@property (nonatomic) NSArray currencyCodes;
- (void)updateWithDictionary:;
- (id)dictionaryRepresentationWithLocalizer:;
- (id)initWithCoder:;
- (id)currencyCode;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setCurrencyCode:;
- (id)__INCodableDescriptionCurrencyCodesKey;
- (id)__INIntentResponseCodableDescriptionCurrencyCodesKey;
- (id)__INTypeCodableDescriptionCurrencyCodesKey;
- (id)__INCodableDescriptionCurrencyCodeKey;
- (id)__INIntentResponseCodableDescriptionCurrencyCodeKey;
- (id)__INTypeCodableDescriptionCurrencyCodeKey;
- (id)currencyCodes;
+ (BOOL)supportsSecureCoding;
@end
