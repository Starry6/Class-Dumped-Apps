@interface AWEWorkspaceDraftSaveServiceImpl : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> queueSerial;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)saveProject:completion:;
- (void)saveWorkspace:video:scene:isUserAction:completion:;
- (void)saveWorkspace:video:backup:scene:isUserAction:completion:;
- (void)saveWorkspace:video:backup:modifiedHandler:scene:isUserAction:completion:;
- (void)p_saveProjectImpl:completion:;
- (void)saveWorkspace:video:backupFlag:modifiedHandler:scene:isUserAction:completion:;
- (void)showSaveDraftErrorDialogWithType:;
- (void)saveProjects:completion:;
- (void)p_saveWorkspace:video:backup:presaveHandler:scene:completion:;
- (id)queueSerial;
- (void)p_saveVideoDataWithProject:completion:;
- (id)generateDraftWithRepository:error:;
- (void)storeExtensionModelsFor:with:;
- (void)setQueueSerial:;
- (void).cxx_destruct;
@end
