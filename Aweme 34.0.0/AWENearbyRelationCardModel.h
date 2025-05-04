@interface AWENearbyRelationCardModel : AWEBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString subTitle;
@property (nonatomic) q locationIndex;
@property (nonatomic) NSArray candidateList;
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)indexToInsert;
- (void)setCandidateList:;
- (void)setSubTitle:;
- (id)subTitle;
- (id)candidateList;
- (id)size;
- (void).cxx_destruct;
- (void)setSize:;
- (id)title;
- (void)setTitle:;
- (long long)locationIndex;
- (void)setLocationIndex:;
+ (id)candidateListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
