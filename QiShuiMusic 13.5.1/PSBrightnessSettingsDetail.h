@interface PSBrightnessSettingsDetail : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (double)currentValue;
+ (void)setValue:;
+ (id)preferencesURL;
+ (id)iconImage;
+ (double)incrementedBrightnessValue:;
+ (void)incrementBrightnessValue:;
+ (void)beginBrightnessAdjustmentTransaction;
+ (void)endBrightnessAdjustmentTransaction;
+ (void)beginObservingExternalBrightnessChanges:changedAction:;
+ (void)endObservingExternalBrightnessChanges;
+ (BOOL)deviceSupportsAutoBrightness;
+ (void)setAutoBrightnessEnabled:;
+ (BOOL)autoBrightnessEnabled;
@end
