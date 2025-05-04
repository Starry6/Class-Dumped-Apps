@interface AWERewardStatisticsModel : MTLModel
@property (nonatomic) q type;
@property (nonatomic) q status;
@property (nonatomic) NSString result;
@property (nonatomic) AWEURLModel iconURL;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString taskType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)schema;
- (id)taskType;
- (void)setIconURL:;
- (void)setResult:;
- (void)setSchema:;
- (void)setStatus:;
- (id)iconURL;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (long long)status;
- (id)result;
- (void)setTaskType:;
+ (id)iconURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
