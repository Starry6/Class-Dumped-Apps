@interface LynxExternalResourceFetcherWrapper : NSObject
@property (nonatomic) BOOL enableLynxService;
- (BOOL)enableLynxService;
- (void)fetchResource:withLoadedBlock:;
- (id)initWithDynamicComponentFetcher:;
- (void)setEnableLynxService:;
- (void).cxx_destruct;
@end
