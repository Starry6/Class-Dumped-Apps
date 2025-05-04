@interface AWEAIGCProcessResultModel : AWEBaseApiModel
@property (nonatomic) NSString taskId;
@property (nonatomic) NSString respJson;
@property (nonatomic) NSDictionary resourceMap;
@property (nonatomic) NSDictionary timeStatistics;
@property (nonatomic) AWEAIGCBaseBusinessCustomModel businessParseModel;
@property (nonatomic) NSArray generationList;
@property (nonatomic) NSArray taskList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)resourceMap;
- (void)setResourceMap:;
- (id)respJson;
- (id)generationList;
- (id)businessParseModel;
- (void)setRespJson:;
- (void)setGenerationList:;
- (void)setBusinessParseModel:;
- (void)setTimeStatistics:;
- (void).cxx_destruct;
- (id)timeStatistics;
- (id)taskId;
- (void)setTaskList:;
- (id)taskList;
- (void)setTaskId:;
+ (id)JSONKeyPathsByPropertyKey;
@end
