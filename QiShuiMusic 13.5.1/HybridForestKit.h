@interface HybridForestKit : NSObject
@property (nonatomic) IESForestKit forestKit;
@property (nonatomic) HybridForestConfig hybridForestConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)bindForestKit:;
- (BOOL)cancelResourceLoad:;
- (id)currentLoaderConfig;
- (id)fetchResourceWithURL:container:taskConfig:completion:;
- (id)forestKit;
- (id)hybridForestConfig;
- (id)openSession:;
- (id)prepareProviderWithResponse:url:;
- (id)prepareRequestWithUrlString:withTaskConfig:;
- (void)prepareTaskConfigWithResponse:taskConfig:;
- (void)setForestKit:;
- (void)setHybridForestConfig:;
- (void)updateForestConfig;
- (void)updateLoaderConfig:;
- (id)init;
- (void)closeSession:;
- (void).cxx_destruct;
- (BOOL)deleteResource:;
+ (id)defaultLoader;
@end
