@interface AWESimilarPropRecommendModel : MTLModel
@property (nonatomic) NSString propID;
@property (nonatomic) NSString propName;
@property (nonatomic) AWEURLModel iconURL;
@property (nonatomic) q userCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setIconURL:;
- (id)iconURL;
- (void).cxx_destruct;
- (void)setUserCount:;
- (long long)userCount;
- (id)propName;
- (void)setPropName:;
- (id)propID;
- (void)setPropID:;
+ (id)iconURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
