@interface IESLiveSaaSTemplateEngine : NSObject
@property (nonatomic) <IESLiveSaaSKVStoreProvider> kvStoreProvider;
@property (nonatomic) <IESLiveSaaSKVStore> kvStore;
@property (nonatomic) <IESLiveMonitor> monitor;
@property (nonatomic) NSString locale;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)kvStoreProvider;
- (id)parseDisplayText:withDIContext:;
- (id)templateForKey:;
- (BOOL)disablePerformanceOptimization;
- (long long)localVerion;
- (id)parseDisplayText:configuration:diContext:;
- (id)parseEnableSchemaInfoDisplayText:configuration:diContext:;
- (id)parsePiecesFromDisplayText:configuration:diContext:;
- (void)savePackage:version:;
- (void)setKvStoreProvider:;
- (void)updateTemplate;
- (void)setKvStore:;
- (void)setLocale:;
- (id)kvStore;
- (id)locale;
- (void)setMonitor:;
- (void).cxx_destruct;
- (id)monitor;
- (id)initWithLocale:;
@end
