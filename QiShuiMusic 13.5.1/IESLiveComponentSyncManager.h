@interface IESLiveComponentSyncManager : NSObject
@property (nonatomic) NSMutableDictionary innerTaskGroupMap;
@property (nonatomic) NSMutableDictionary taskGroupMap;
@property (nonatomic) IESLiveComponentDynamicSyncConfig syncConfigModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)syncConfigModel;
- (void)componentMountDidFinishForLevel:;
- (void)didSetAttachingDIContext;
- (id)innerTaskGroupMap;
- (void)registerGroupWithID:previewBlock:finishedBlock:;
- (void)registerTaskWithID:;
- (void)registerTaskWithID:groupID:;
- (void)setInnerTaskGroupMap:;
- (void)setSyncConfigModel:;
- (void)setTaskGroupMap:;
- (void)setUpConfig:;
- (void)setUpSyncConfigModel:;
- (void)setUpTaskGroup;
- (void)subscribeStateTaskID:groupID:callback:;
- (id)syncGroupWithID:create:;
- (id)syncGroupWithTaskID:create:;
- (id)taskGroupMap;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)finishedTaskWithID:;
@end
