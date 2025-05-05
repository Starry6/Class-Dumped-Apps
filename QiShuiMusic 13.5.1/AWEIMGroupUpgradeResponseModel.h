@interface AWEIMGroupUpgradeResponseModel : IESIMBaseApiModel
@property (nonatomic) NSArray taskList;
- (void).cxx_destruct;
- (id)taskList;
- (void)setTaskList:;
+ (id)taskListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
