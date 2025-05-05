@interface BDUGFlowExperiments : BDUGFlowBasicModel
@property (nonatomic) q testId;
@property (nonatomic) q testGroup;
- (void)setTestGroup:;
- (long long)testGroup;
- (long long)testId;
- (void)setTestId:;
- (id)toJsonDictionary;
+ (id)modelWithDictionary:;
@end
