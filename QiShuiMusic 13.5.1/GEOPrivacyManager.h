@interface GEOPrivacyManager : NSObject
@property (nonatomic) BOOL hasFiredCallHistoryRecentsClearedNotification;
@property (nonatomic) BOOL hasFiredResetPrivacyWarningsNotification;
@property (nonatomic) BOOL hasFiredLocationServicesDisabledNotification;
- (id)init;
- (void)dealloc;
- (BOOL)hasFiredCallHistoryRecentsClearedNotification;
- (void)_fireResetLocationAndPrivacyNotification;
- (void)_fireRecentsClearedNotification;
- (BOOL)hasFiredResetPrivacyWarningsNotification;
- (void)_locationServicesStateChanged;
- (BOOL)hasFiredLocationServicesDisabledNotification;
+ (id)sharedManager;
@end
