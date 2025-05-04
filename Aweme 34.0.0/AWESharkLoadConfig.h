@interface AWESharkLoadConfig : NSObject
@property (nonatomic) BOOL enablePrefetch;
@property (nonatomic) BOOL enablePreload;
@property (nonatomic) NSDictionary prefetchApis;
- (BOOL)enablePreload;
- (BOOL)enablePrefetch;
- (void)setEnablePrefetch:;
- (void)setEnablePreload:;
- (id)prefetchApis;
- (void)setPrefetchApis:;
- (void).cxx_destruct;
@end
