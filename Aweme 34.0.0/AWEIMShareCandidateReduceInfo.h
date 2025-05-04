@interface AWEIMShareCandidateReduceInfo : MTLModel
@property (nonatomic) BOOL enable;
@property (nonatomic) double recommendThre;
@property (nonatomic) q historyShareInsertMinDay;
@property (nonatomic) q lowShareRelationValue;
@property (nonatomic) q insertStartIndex;
@property (nonatomic) NSArray insertContactList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)historyShareInsertMinDay;
- (double)recommendThre;
- (void)setRecommendThre:;
- (void)setHistoryShareInsertMinDay:;
- (long long)lowShareRelationValue;
- (void)setLowShareRelationValue:;
- (long long)insertStartIndex;
- (void)setInsertStartIndex:;
- (id)insertContactList;
- (void)setInsertContactList:;
- (BOOL)enable;
- (void).cxx_destruct;
- (void)setEnable:;
+ (id)insertContactListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
