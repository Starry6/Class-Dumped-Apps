@interface AWENearbyTrackVerifyRuleModel : MTLModel
@property (nonatomic) NSString checkRuleId;
@property (nonatomic) NSDictionary indexKeyValuesPairs;
@property (nonatomic) NSDictionary checkContainPairs;
@property (nonatomic) NSDictionary coverModelMap;
@property (nonatomic) NSArray checkNullKeys;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)checkRuleId;
- (id)indexKeyValuesPairs;
- (id)coverModelMap;
- (id)checkContainPairs;
- (id)checkNullKeys;
- (void)setCheckRuleId:;
- (void)setIndexKeyValuesPairs:;
- (void)setCheckContainPairs:;
- (void)setCoverModelMap:;
- (void)setCheckNullKeys:;
- (void).cxx_destruct;
+ (BOOL)automaticallyDefaultMapping;
+ (id)coverModelMapJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
