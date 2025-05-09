@interface AWECFSession : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> fetchListQueue;
@property (nonatomic) BOOL willStartFetchList;
@property (nonatomic) BOOL didStartSDK;
@property (nonatomic) NSMutableDictionary betterInfo;
@property (nonatomic) NSMutableArray loadedlazyModules;
@property (nonatomic) NSMutableArray loadedlazyDylibs;
@property (nonatomic) NSMutableSet taskSet;
@property (nonatomic) <BDQBDelegate> delegate;
@property (nonatomic) AWECFEradicates conf;
@property (nonatomic) AWECFButtercups refreshStrategy;
- (void)setConf:;
- (id)queryVersionFromData:;
- (void)moduleData:willLoadWithError:;
- (BOOL)bd_systemLayoutFittingSizeDidChangeForChildContentContainer;
- (void)bd_sizeForChildContentContainer;
- (void)bd_viewWillTransitionToSize:bd_willTransitionToTraitCollection:;
- (id)bd_requestData:;
- (void)didFinishFetchQuaterbackList:;
- (void)setWillStartFetchList:;
- (void)lockInitial;
- (void)unlockInitial;
- (void)bd_preferredContentSizeDidChangeForChildContentContainer:;
- (BOOL)needLoadLocalQuaterbacks;
- (void)loadLocalAllModules;
- (void)setDidStartSDK:;
- (BOOL)isBradyRunning;
- (void)lockVM;
- (void)engineLog:;
- (void)engineExceptionHandler:;
- (void)engineLoadModuleError:moduleName:moduleVersion:duration:;
- (void)unlockVM;
- (void)lockLazyModules;
- (id)loadedlazyDylibs;
- (void)unlockLazyModules;
- (id)loadedlazyModules;
- (void)loadDYCLazyDylibModule:bd_willTransitionToTraitCollection:;
- (void)_loadDYCModule:bd_willTransitionToTraitCollection:;
- (id)fetchListQueue;
- (void)lockTaskSet;
- (void)unlockTaskSet;
- (BOOL)didStartSDK;
- (BOOL)willStartFetchList;
- (id)allLoadedQuaterbacks;
- (BOOL)isEngineRunning;
- (BOOL)isJSContextRunning;
- (void)setFetchListQueue:;
- (id)betterInfo;
- (void)setBetterInfo:;
- (void)setLoadedlazyModules:;
- (void)setLoadedlazyDylibs:;
- (id)init;
- (void)dealloc;
- (id)delegate;
- (void)setRefreshStrategy:;
- (id)refreshStrategy;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)conf;
- (id)taskSet;
- (void)setTaskSet:;
+ (void)loadLazyModuleWithName:;
+ (void)fetchQuaterbacks;
+ (void)startWithConfiguration:delegate:;
+ (void)clearAllLocalQuaterback;
+ (void)bd_sizeForChildContentContainer;
+ (void)fetchServerData;
+ (void)loadFileAtPath:config:;
+ (void)loadZipFileAtPath:;
+ (id)bd_requestData:;
+ (id)loadedlazyModules;
+ (id)loadedlazydylibs;
+ (BOOL)fetchServerDataIfNeed;
+ (id)statusMap:;
+ (void)_loadModuleAtPath:;
+ (id)lookupFunctionByName:inModuleNamed:moduleVersion:;
+ (BOOL)registerCustomHookFunctionForSegment:section:handler:;
+ (void)startTest;
+ (id)sharedMain;
+ (void)loadFileAtPath:;
+ (BOOL)handleOpenURL:;
@end
