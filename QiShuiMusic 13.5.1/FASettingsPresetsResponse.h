@interface FASettingsPresetsResponse : NSObject
@property (nonatomic) NSArray availablePresets;
@property (nonatomic) FASettingsPreset expectedPreset;
@property (nonatomic) FASettingsPreset currentPreset;
- (id)currentPreset;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)availablePresets;
- (id)expectedPreset;
- (id)initWithAvailablePresets:expectedPreset:currentPreset:;
+ (BOOL)supportsSecureCoding;
@end
