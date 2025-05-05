@interface BDBDMain : NSObject
@property (nonatomic) BDBDConfiguration conf;
- (void).cxx_destruct;
- (id)conf;
+ (void)clearAllLocalBandage;
+ (id)configuration:;
+ (void)fetchBandages;
+ (void)loadModuleAtPath:;
+ (void)loadQuaterbackWithInfo:error:;
+ (id)lookupFunctionByName:inModuleNamed:moduleVersion:;
+ (void)startWithConfiguration:delegate:;
+ (BOOL)unzipFileAtPath:toDestination:completion:;
+ (id)sharedMain;
@end
