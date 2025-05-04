@interface AWEUGSnackbarStrategyManager : NSObject
@property (nonatomic) NSMutableArray strategyList;
@property (nonatomic) MMKV mmkv;
- (id)strategyList;
- (void)setStrategyList:;
- (void)markSnackbarForbiddenForSceneType:params:;
- (void)setMmkv:;
- (id)mmkv;
- (void)clearRecord;
- (void)trackLogWithMessage:;
- (void)injectSnackbarStrategy:config:evadeStrategy:;
- (void)removeSnackbarStrategy:;
- (void)reportShortcutInstall:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
