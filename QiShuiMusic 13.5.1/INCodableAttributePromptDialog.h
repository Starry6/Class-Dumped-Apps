@interface INCodableAttributePromptDialog : INCodableAttributeDialog
@property (nonatomic) Q type;
- (id)__INIntentResponseCodableDescriptionKey;
- (void)updateWithDictionary:;
- (id)dictionaryRepresentationWithLocalizer:;
- (id)__INTypeCodableDescriptionKey;
- (id)__INCodableDescriptionTypeKey;
- (id)__INTypeCodableDescriptionTypeKey;
- (void)setType:;
- (id)__INCodableDescriptionFormatStringKey;
- (id)__INIntentResponseCodableDescriptionTypeKey;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)__INCodableDescriptionFormatStringDictionaryKey;
- (unsigned long long)type;
- (id)__INCodableDescriptionFormatStringLanguageCodeKey;
- (id)__INCodableDescriptionFormatStringIDKey;
- (id)__INCodableDescriptionKey;
- (BOOL)isEqual:;
- (id)__INCodableDescriptionFormatStringDictionaryLanguageCodeKey;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
