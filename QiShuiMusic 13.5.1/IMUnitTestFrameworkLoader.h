@interface IMUnitTestFrameworkLoader : NSObject
@property (nonatomic) BOOL xctestFrameworkLoaded;
@property (nonatomic) IMUnitTestBundleLoader bundleLoader;
@property (nonatomic) IMUnitTestLogger logger;
- (id)logger;
- (void).cxx_destruct;
- (id)initWithLogger:bundleLoader:;
- (id)bundleLoader;
- (BOOL)loadFrameworkNamesFromTextFile:outNames:error:;
- (BOOL)readXCTestFrameworkDependencies:error:;
- (BOOL)frameworkExistsAtPath:;
- (id)frameworkSearchPaths;
- (BOOL)findFrameworkPathsWithFrameworkNames:searchPaths:outFrameworkPaths:error:;
- (BOOL)loadFrameworks:outError:;
- (BOOL)loadXCTestFrameworkFromSDK:;
- (BOOL)loadXCTestFramework:;
- (BOOL)loadTestFrameworks:;
- (BOOL)xctestFrameworkLoaded;
- (void)setXctestFrameworkLoaded:;
@end
