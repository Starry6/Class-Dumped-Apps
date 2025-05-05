@interface IESSaaSTIMSettingManager : NSObject
@property (nonatomic) BOOL enableMachOForStartup;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSDictionary settings;
@property (nonatomic) NSDictionary lastCachedSettings;
- (BOOL)enableMachOForStartup;
- (id)lastCachedSettings;
- (void)p_appWillEnterForeground;
- (void)p_syncSettingsFromServer;
- (void)setLastCachedSettings:;
- (id)valueForKey:expectedClass:useCache:forceUseLast:;
- (id)settings;
- (void)setSettings:;
- (void)updateSettings:;
- (void).cxx_destruct;
+ (long long)startUpOrder;
+ (void)startUp;
+ (id)sharedInstance;
@end
