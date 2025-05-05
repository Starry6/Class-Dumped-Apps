@interface IESGurdSettingsCacheManager : NSObject
@property (nonatomic) NSDictionary settingsResponseDictionary;
- (id)cachedSettingsResponse;
- (void)removeLocalFiles;
- (void)saveResponseDictionary:;
- (void)setSettingsResponseDictionary:;
- (id)settingsDataWithPath:;
- (id)settingsResponseDictionary;
- (void)cleanCache;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
