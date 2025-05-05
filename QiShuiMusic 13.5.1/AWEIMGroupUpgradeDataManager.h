@interface AWEIMGroupUpgradeDataManager : NSObject
@property (nonatomic) NSArray taskList;
@property (nonatomic) BOOL metAllUpgradeTasks;
@property (nonatomic) BOOL isCertified;
@property (nonatomic) NSArray unfinishedTaskName;
- (void)setIsCertified:;
- (void)fetchDataWithConversation:Completion:;
- (BOOL)metAllUpgradeTasks;
- (void)setMetAllUpgradeTasks:;
- (void)setUnfinishedTaskName:;
- (id)unfinishedTaskName;
- (void).cxx_destruct;
- (id)taskList;
- (void)setTaskList:;
- (BOOL)isCertified;
@end
