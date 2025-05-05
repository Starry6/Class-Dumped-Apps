@interface TRINamespaceStatusProvider : NSObject
- (id)initWithPaths:;
- (void).cxx_destruct;
- (BOOL)saveStatus:;
- (id)urlForStatusWithNamespaceName:;
- (id)statusForNamespaceWithName:;
- (BOOL)updateStatusForNamespaceWithName:usingBlock:;
- (BOOL)deleteStatusForNamespaceWithName:;
- (id)loadNamespaceStatusFromURL:;
- (BOOL)saveNamespaceStatus:toURL:;
@end
