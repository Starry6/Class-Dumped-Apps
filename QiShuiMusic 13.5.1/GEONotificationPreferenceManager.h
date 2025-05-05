@interface GEONotificationPreferenceManager : NSObject
- (id)init;
- (void)setEnabled:forSubTestWithName:;
- (BOOL)isEnabledForSubTestWithName:;
- (void).cxx_destruct;
- (void)reset;
+ (id)sharedManager;
@end
