@interface MEExtensionUserPreferences : NSObject
@property (nonatomic) NSMutableDictionary extensionIDToUserEnabledMap;
- (id)_serializedData;
- (void).cxx_destruct;
- (id)_loadUserPreferences;
- (id)_plistURL;
- (id)_prefsDictionary;
- (BOOL)isExtensionEnabled:;
- (void)setExtensionEnabled:forExtensionID:;
- (void)_savePreferences;
- (id)extensionIDToUserEnabledMap;
- (void)setExtensionIDToUserEnabledMap:;
+ (id)log;
+ (id)sharedInstance;
@end
