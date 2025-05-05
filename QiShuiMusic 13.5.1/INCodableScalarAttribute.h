@interface INCodableScalarAttribute : INCodableAttribute
@property (nonatomic) q type;
- (id)__INIntentResponseCodableDescriptionKey;
- (void)updateWithDictionary:;
- (id)dictionaryRepresentationWithLocalizer:;
- (Class)objectClass;
- (id)__INTypeCodableDescriptionKey;
- (id)__INCodableDescriptionTypeKey;
- (id)__INTypeCodableDescriptionTypeKey;
- (void)setType:;
- (Class)resolutionResultClass;
- (id)__INIntentResponseCodableDescriptionTypeKey;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (long long)type;
- (id)__INCodableDescriptionKey;
- (long long)valueType;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (Class)_relationshipValueTransformerClass;
- (id)initWithPropertyName:type:;
+ (BOOL)supportsSecureCoding;
@end
