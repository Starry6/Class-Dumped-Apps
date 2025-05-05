@interface CalAlarmMetadata : CalItemMetadata
- (id)initWithCoder:;
+ (BOOL)supportsSecureCoding;
+ (id)metadataWithData:;
+ (BOOL)isRecognizedProperty:inComponent:;
+ (BOOL)isRecognizedParameter:forProperty:inComponent:;
+ (BOOL)shouldSkipSavingUnrecognizedParametersForProperty:inComponent:;
@end
