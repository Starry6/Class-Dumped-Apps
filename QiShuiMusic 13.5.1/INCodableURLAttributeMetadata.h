@interface INCodableURLAttributeMetadata : INCodableAttributeMetadata
@property (nonatomic) NSURL defaultValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)__INIntentResponseCodableDescriptionKey;
- (void)updateWithDictionary:;
- (id)dictionaryRepresentationWithLocalizer:;
- (id)__INTypeCodableDescriptionKey;
- (void)setDefaultValue:;
- (id)__INIntentResponseCodableDescriptionDefaultValueKey;
- (id)defaultValue;
- (id)initWithCoder:;
- (id)defaultValueForIntentDefaultValueProvider;
- (id)__INTypeCodableDescriptionDefaultValueKey;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)__INCodableDescriptionKey;
- (id)__INCodableDescriptionDefaultValueKey;
+ (BOOL)supportsSecureCoding;
@end
