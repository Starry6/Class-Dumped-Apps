@interface CBPresetsParser : NSObject
- (id)init;
- (void)dealloc;
- (void)setDisplayList:;
- (void)refreshPresetState;
- (BOOL)trueToneDisabled;
- (BOOL)nightShiftDisabled;
- (BOOL)autoBrightnessDisabledForDisplay:;
- (BOOL)brightnessDisabledForDisplay:;
- (BOOL)referenceMode:;
+ (id)sharedInstance;
@end
