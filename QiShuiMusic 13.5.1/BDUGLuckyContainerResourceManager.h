@interface BDUGLuckyContainerResourceManager : NSObject
@property (nonatomic) NSMutableDictionary blockGeckoVersionsDict;
- (id)blockGeckoVersionsDict;
- (void)setBlockGeckoVersionsDict:;
- (void)settingsDidUpdateAction;
- (void)setupInitialization;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (void)initIESGurdKit;
+ (void)initializeResourceProbe;
+ (void)registerAccessKey;
+ (id)sharedInstance;
@end
