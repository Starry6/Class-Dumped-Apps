@interface ACCUserDefaults : NSUserDefaults
- (id)init;
+ (id)sharedDefaults;
+ (id)sharedDefaultsIapd;
+ (id)sharedDefaultsLogging;
@end
