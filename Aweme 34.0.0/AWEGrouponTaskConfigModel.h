@interface AWEGrouponTaskConfigModel : MTLModel
@property (nonatomic) NSArray blockTaskList;
@property (nonatomic) NSArray tasks;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)blockTaskList;
- (void)setBlockTaskList:;
- (void).cxx_destruct;
- (void)setTasks:;
- (id)tasks;
+ (id)tasksJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
