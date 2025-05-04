@interface AWEAIGCAsyncTaskQueryStateResponseModel : ACCBaseApiModel
@property (nonatomic) NSArray generationList;
@property (nonatomic) NSArray dataList;
@property (nonatomic) NSArray taskList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDataList:;
- (id)generationList;
- (void)setGenerationList:;
- (void).cxx_destruct;
- (void)setTaskList:;
- (id)taskList;
- (id)dataList;
+ (id)dataListJSONTransformer;
+ (id)taskListJSONTransformer;
+ (id)generationListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
