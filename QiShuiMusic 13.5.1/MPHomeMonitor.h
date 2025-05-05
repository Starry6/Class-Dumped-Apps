@interface MPHomeMonitor : NSObject
@property (nonatomic) BOOL soundCheckEnabled;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)setSoundCheckEnabled:;
- (BOOL)isSoundCheckEnabled;
- (void)currentHomeDidChange;
- (void)currentUserDidChange;
- (void)homeUsersDidChange;
- (void)soundCheckSettingDidUpdate:;
- (void)_postNotificationWithName:;
+ (id)sharedMonitor;
+ (BOOL)isCurrentDeviceValidHomeAccessory;
+ (void)setupIfNecessary;
@end
