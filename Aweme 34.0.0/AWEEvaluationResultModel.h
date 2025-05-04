@interface AWEEvaluationResultModel : MTLModel
@property (nonatomic) NSDictionary responseMetadata;
@property (nonatomic) AWEEvaluationTaskModel task;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTask:;
- (id)task;
- (void).cxx_destruct;
- (id)responseMetadata;
- (void)setResponseMetadata:;
+ (id)taskJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
