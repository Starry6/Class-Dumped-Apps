@interface INCodableEnumAttribute : INCodableAttribute
@property (nonatomic) INCodableEnum codableEnum;
@property (nonatomic) NSString enumNamespace;
- (void)updateWithDictionary:;
- (id)dictionaryRepresentationWithLocalizer:;
- (Class)resolutionResultClass;
- (id)enumNamespace;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (long long)valueType;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)valueForIndex:;
- (Class)_relationshipValueTransformerClass;
- (id)__INCodableDescriptionEnumTypeNamespaceKey;
- (id)__INIntentResponseCodableDescriptionEnumTypeNamespaceKey;
- (id)__INTypeCodableDescriptionEnumTypeNamespaceKey;
- (id)__INCodableDescriptionEnumTypeKey;
- (id)__INIntentResponseCodableDescriptionEnumTypeKey;
- (id)__INTypeCodableDescriptionEnumTypeKey;
- (id)codableEnum;
- (id)valueWithName:;
- (void)setCodableEnum:;
- (void)setEnumNamespace:;
+ (BOOL)supportsSecureCoding;
@end
