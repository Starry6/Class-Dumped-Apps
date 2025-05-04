@interface AWEEcomSearchListContext : AWEPageContext
@property (nonatomic) <AWEDoubleColumnSearchMerchandiseDataProviderStorage> storage;
@property (nonatomic) <AWEDoubleColumnSearchMerchandiseDataProviderEnvironmentVariables> env;
@property (nonatomic) NSMutableArray previousVisibleIndexPaths;
- (id)env;
- (void)setEnv:;
- (id)previousVisibleIndexPaths;
- (void)setPreviousVisibleIndexPaths:;
- (void)setStorage:;
- (id)storage;
- (void).cxx_destruct;
@end
