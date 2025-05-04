@interface AWESettingsTracker : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)userChangedFrom:to:;
- (id)init;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (BOOL)isSwitchingAccount;
+ (void)trackCombineWithStatus:;
+ (id)pushScene:extraParams:;
+ (id)getEventStack;
+ (BOOL)eventDictionary:isForScene:;
+ (void)trackWithScene:status:extraParams:;
+ (id)popEvent;
+ (void)trackCombineBackupWithStatus:;
+ (void)trackAfterLoginWithStatus:;
+ (void)trackSwitchAccountWithStatus:;
+ (void)trackAfterLogoutWithStatus:;
+ (void)trackUndefinedWithStatus:;
+ (void)trackByteSyncWithStatus:taskID:timestamp:;
+ (void)trackByteSyncWithStatus:extraParams:;
+ (void)traceRequestWithSceneDictionary:status:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
+ (id)peekEvent;
@end
