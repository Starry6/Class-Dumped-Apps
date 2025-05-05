@interface WebPluginPackage : WebBasePluginPackage
- (BOOL)load;
- (void)dealloc;
- (id)bundle;
- (id)initWithPath:;
- (Class)viewFactory;
@end
