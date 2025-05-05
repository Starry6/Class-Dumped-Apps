@interface CalItemMetadata : NSObject
@property (nonatomic) NSDictionary unrecognizedProperties;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)unrecognizedProperties;
- (id)initWithICSComponent:;
- (id)propertyValueForComparison:propertyKey:;
- (void)applyToComponent:;
- (id)dataRepresentationWithExistingMetaData:;
+ (BOOL)supportsSecureCoding;
+ (id)metadataWithData:;
+ (BOOL)isRecognizedProperty:inComponent:;
+ (BOOL)isRecognizedParameter:forProperty:inComponent:;
+ (BOOL)shouldSkipSavingUnrecognizedParametersForProperty:inComponent:;
+ (id)_whitelistedClassesForSecureCoding;
+ (id)metadataWithICSComponent:;
@end
