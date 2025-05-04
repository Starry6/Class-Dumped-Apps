@interface AWEBatManTasksConfig : NSObject
@property (nonatomic) NSDictionary configDict;
@property (nonatomic) NSArray orginTaskInfos;
@property (nonatomic) NSArray taskViewModels;
- (void)arrangeTaskInfos:isVip:;
- (id)getTasksModels;
- (void)setTaskViewModels:;
- (id)taskViewModels;
- (id)taskViewModelWithIndex:;
- (void)setOrginTaskInfos:;
- (void)arrangeExtraInfoWithModel:taskInfo:isVip:;
- (void)arrangeSignInExtraInfoWithModel:extra:isVip:;
- (void)arrangeADExtraInfoWithModel:extra:isVip:;
- (void)arrangeExtraInfoWithModel:extra:isVip:;
- (void)arrangeNewUserExtraInfoWithModel:extra:;
- (id)taskViewModelWithType:;
- (id)orginTaskInfos;
- (id)configDict;
- (void)setConfigDict:;
- (void).cxx_destruct;
- (unsigned long long)tasksCount;
+ (id)sharedInstance;
@end
