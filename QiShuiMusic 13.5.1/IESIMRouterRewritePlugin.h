@interface IESIMRouterRewritePlugin : NSObject
@property (nonatomic) BOOL enabled;
@property (nonatomic) <IESIMRouterRewritePluginDataSource> dataSource;
- (id)rewriteURL:;
- (void)setDataSource:;
- (BOOL)enabled;
- (id)dataSource;
- (void)setEnabled:;
- (void).cxx_destruct;
+ (id)sharedPlugin;
@end
