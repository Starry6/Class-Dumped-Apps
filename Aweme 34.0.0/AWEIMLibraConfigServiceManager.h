@interface AWEIMLibraConfigServiceManager : NSObject
@property (nonatomic) NSDictionary result;
@property (nonatomic) BOOL hasLoadedDiskResultForThisAccount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (BOOL)hasLoadedDiskResultForThisAccount;
- (void)setHasLoadedDiskResultForThisAccount:;
- (void)__loadResultFromDisk;
- (id)__hasExceedMinimumRequestIntervalForSceneOfEnterStrangerBox;
- (void)__fetchB2CEnterStrangerBoxSceneABTestResultWithCompletion:;
- (id)__enterStrangerBoxSceneABTestKeys;
- (void)__writeEntriesToMemory:specifiedKeys:;
- (void)__fetchWithParam:completion:;
- (void)fetchB2CEnterStrangerBoxSceneABTestResultWithCompletion:;
- (id)init;
- (void)dealloc;
- (void)setResult:;
- (void).cxx_destruct;
- (id)result;
+ (id)sharedInstance;
@end
