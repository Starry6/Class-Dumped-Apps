@interface PKApplicationWorkspaceProxy : NSObject
@property (nonatomic) LSApplicationWorkspace lsObject;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)removeObserver:;
- (id)init;
- (void)addObserver:;
- (void).cxx_destruct;
- (id)installedPlugins;
- (id)pluginsMatchingQuery:applyFilter:;
- (BOOL)registerPlugin:;
- (BOOL)unregisterPlugin:;
- (id)lsObject;
+ (id)defaultWorkspace;
@end
