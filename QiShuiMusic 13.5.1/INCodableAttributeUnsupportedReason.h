@interface INCodableAttributeUnsupportedReason : INCodableAttributeDialog
@property (nonatomic) NSString code;
@property (nonatomic) NSString predicateFormat;
- (id)__INIntentResponseCodableDescriptionKey;
- (void)updateWithDictionary:;
- (id)dictionaryRepresentationWithLocalizer:;
- (id)__INTypeCodableDescriptionKey;
- (id)predicateFormat;
- (id)__INCodableDescriptionFormatStringKey;
- (id)code;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)__INTypeCodableDescriptionCodeKey;
- (id)__INIntentResponseCodableDescriptionCodeKey;
- (void)encodeWithCoder:;
- (id)__INCodableDescriptionFormatStringDictionaryKey;
- (void).cxx_destruct;
- (id)__INCodableDescriptionFormatStringLanguageCodeKey;
- (id)__INCodableDescriptionFormatStringIDKey;
- (id)__INCodableDescriptionKey;
- (void)setCode:;
- (id)__INCodableDescriptionCodeKey;
- (BOOL)isEqual:;
- (id)__INCodableDescriptionFormatStringDictionaryLanguageCodeKey;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
