@interface PSGuidedAccessSettingsDetail : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (unsigned long long)guidedAccessAvailability;
+ (id)preferencesURL;
+ (id)iconImage;
+ (BOOL)guidedAccessHasPasscode;
+ (void)setGuidedAccessSwitchEnabled:;
+ (void)enterGuidedAccessMode;
@end
