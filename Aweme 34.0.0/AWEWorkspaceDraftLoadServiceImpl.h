@interface AWEWorkspaceDraftLoadServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)loadWorkspaceWithDraft:context:strategy:completion:;
- (void)loadProjectWithWorkspace:projectUUID:completion:;
- (void)loadProjectWithWorkspace:projectDraft:completion:;
- (void)loadWorkspaceWithDraftID:context:strategy:completion:;
- (void)retrievePublishModuleFromDraft:context:completion:;
- (void)loadProjectWithOriginWorkspace:projectUUID:completion:;
- (void)loadProjectWithWorkspace:projectUUID:isBackupProject:completion:;
- (void)loadProjectWithWorkspace:projectDraft:isBackupProject:completion:;
- (void)performDegradeRecoverWithWorkspace:result:completion:;
- (void)loadBackupProjectWithbackupProjectUUIDs:workspace:draft:uuidToDraftDic:completion:;
- (void)sortWorkspace:withProjectUUIDs:;
- (void)loadProjectWithDraftID:projectUUID:completion:;
@end
