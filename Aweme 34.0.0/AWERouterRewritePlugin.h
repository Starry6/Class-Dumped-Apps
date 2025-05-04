@interface AWERouterRewritePlugin : NSObject
@property (nonatomic) BOOL enabled;
@property (nonatomic) <AWERouterRewritePluginDataSource> dataSource;
- (void)setEnabled:;
- (BOOL)enabled;
- (void).cxx_destruct;
- (void)setDataSource:;
- (id)dataSource;
- (id)rewriteURL:;
+ (id)sharedPlugin;
@end
