@interface INCodablePlacemarkAttributeMetadata : INCodableAttributeMetadata
@property (nonatomic) q type;
- (id)__INIntentResponseCodableDescriptionKey;
- (void)updateWithDictionary:;
- (id)dictionaryRepresentationWithLocalizer:;
- (id)__INTypeCodableDescriptionKey;
- (id)__INCodableDescriptionTypeKey;
- (id)__INTypeCodableDescriptionTypeKey;
- (void)setType:;
- (id)__INIntentResponseCodableDescriptionTypeKey;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)type;
- (id)__INCodableDescriptionKey;
+ (BOOL)supportsSecureCoding;
@end
