@interface IESIMRewardStatisticsModel : MTLModel
@property (nonatomic) q type;
@property (nonatomic) q status;
@property (nonatomic) NSString result;
@property (nonatomic) IESIMURLModel iconURL;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString taskType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setIconURL:;
- (id)result;
- (void)setStatus:;
- (id)schema;
- (id)taskType;
- (void)setType:;
- (void)setSchema:;
- (long long)type;
- (void).cxx_destruct;
- (id)iconURL;
- (long long)status;
- (void)setResult:;
- (void)setTaskType:;
+ (id)iconURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
