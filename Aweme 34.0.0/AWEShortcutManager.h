@interface AWEShortcutManager : NSObject
@property (nonatomic) NSDictionary shortcutIDIconNameDict;
@property (nonatomic) NSMutableArray shortcutConfigList;
- (void)register3DTouchShortcuts;
- (id)getConfigWithType:;
- (id)staticAddShortcutItems;
- (void)sortShortcutConfigUsingRank;
- (id)dynamicAddShortcutItems;
- (void)fetchAndUpdateShortcutConfig:;
- (id)aAWEShortcutCommonAdapter;
- (id)shortcutConfigList;
- (id)shortcutIDIconNameDict;
- (void)setShortcutConfigList:;
- (void)setShortcutIDIconNameDict:;
- (id)init;
- (void).cxx_destruct;
+ (Class)aAWEShortcutCommonAdapterClass;
+ (id)sharedManager;
@end
