@interface STManagementStateObserver : NSObject
@property (nonatomic) NSNumber dsid;
@property (nonatomic) STManagementState managementState;
@property (nonatomic) q contactManagementState;
@property (nonatomic) STManagementStateObserver me;
@property (nonatomic) NSObject<OS_dispatch_queue> screenTimeSettingsChangeQueue;
@property (nonatomic) NSInteger screenTimeSettingsChangeNotifyToken;
- (id)dsid;
- (void)setMe:;
- (void)dealloc;
- (id)me;
- (long long)contactManagementState;
- (void).cxx_destruct;
- (id)managementState;
- (void)setContactManagementState:;
- (void)setManagementState:;
- (id)_initWithDSID:;
- (void)_screenTimeSettingsDidChange;
- (id)screenTimeSettingsChangeQueue;
- (int)screenTimeSettingsChangeNotifyToken;
+ (void)createObserverWithDSID:completionHandler:;
@end
