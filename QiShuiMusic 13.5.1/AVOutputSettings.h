@interface AVOutputSettings : NSObject
@property (nonatomic) NSSet compatibleMediaTypes;
@property (nonatomic) BOOL willYieldCompressedSamples;
@property (nonatomic) NSDictionary outputSettingsDictionary;
- (id)init;
- (void)dealloc;
- (BOOL)encoderIsAvailableOnCurrentSystemReturningError:;
- (BOOL)willYieldCompressedSamples;
- (id)description;
- (BOOL)canFullySpecifyOutputFormatReturningReason:;
- (id)copyWithZone:;
- (id)initWithOutputSettingsDictionary:exceptionReason:;
- (id)compatibleMediaTypes;
- (BOOL)validateUsingOutputSettingsValidator:reason:;
- (id)outputSettingsDictionary;
+ (id)eligibleOutputSettingsDictionaryKeys;
+ (id)_outputSettingsWithOutputSettingsDictionary:mediaType:exceptionReason:;
+ (id)registeredOutputSettingsClasses;
+ (unsigned long long)validateOutputSettingsDictionary:;
+ (unsigned long long)_validateOutputSettingsDictionary:compatibilityDescription:;
+ (id)outputSettingsWithOutputSettingsDictionary:mediaType:;
+ (id)defaultOutputSettingsForMediaType:;
+ (BOOL)supportsEmptyOutputSettingsDictionary;
@end
