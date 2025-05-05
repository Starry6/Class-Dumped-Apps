@interface IESLiveSaaSSettingsDictStorage : NSObject
@property (nonatomic) BOOL fetched;
@property (nonatomic) NSString settingsKey;
@property (nonatomic) NSDictionary dict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)saveData:toKey:;
- (void)setSettingsKey:;
- (id)initWithSettingsKey:;
- (void)setFetched:;
- (void).cxx_destruct;
- (id)dict;
- (void)setDict:;
- (BOOL)fetched;
- (id)settingsKey;
@end
