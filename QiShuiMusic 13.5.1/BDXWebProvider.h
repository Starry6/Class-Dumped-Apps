@interface BDXWebProvider : NSObject
@property (nonatomic) BDWKPrecreator precreator;
@property (nonatomic) NSInteger maxNumberOfWarmupWebView;
@property (nonatomic) BDXThreadSafeArray warmupList;
@property (nonatomic) q maxNumberOfInstances;
- (id)fetchWebPreWarmupViewWithIsFromPreheat:isfromCache:;
- (id)fetchWebViewWithIsFromCache:;
- (long long)maxNumberOfInstances;
- (int)maxNumberOfWarmupWebView;
- (BOOL)needRemoveInstance;
- (id)precreator;
- (void)setMaxNumberOfInstances:;
- (void)setMaxNumberOfWarmupWebView:;
- (void)setPrecreator:;
- (void)setWarmupList:;
- (void)tiggerWarmup;
- (id)warmupList;
- (id)init;
- (void).cxx_destruct;
+ (void)preCreateExecture;
+ (id)sharedInstance;
@end
