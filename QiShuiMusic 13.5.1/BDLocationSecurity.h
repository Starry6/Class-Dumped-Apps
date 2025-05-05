@interface BDLocationSecurity : NSObject
- (void)_onReceivedWillEnterBackgroundNotification:;
- (void)_onReceivedWillEnterForegroundNotification:;
- (BOOL)canRequestLocation;
- (BOOL)canRequestLocationCache;
- (id)init;
- (void)dealloc;
- (BOOL)isInForeground;
+ (id)sharedSecurity;
@end
