@interface CLSettingsManagerInternal : CLIntersiloService
@property (nonatomic) NSMutableSet clients;
@property (nonatomic) NSMutableDictionary settingsDictionary;
@property (nonatomic) BOOL valid;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setClients:;
- (void)refresh;
- (void)endService;
- (id)clients;
- (void)flush;
- (void)beginService;
- (id)settingsDictionary;
- (void)unregisterForUpdates:;
- (id)syncgetSettingsAndRegisterForUpdates:;
- (id)syncgetSetValue:forKey:withoutNotifying:;
- (void)updateClientsWithDictionary:;
- (void)setSettingsDictionary:;
+ (void)becameFatallyBlocked:index:;
+ (void)performSyncOnSilo:invoker:;
+ (id)getSilo;
@end
