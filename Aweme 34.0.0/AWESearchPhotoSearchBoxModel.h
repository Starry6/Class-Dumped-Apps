@interface AWESearchPhotoSearchBoxModel : AWEBaseApiModel
@property (nonatomic) NSArray boxDetection;
@property (nonatomic) NSDictionary timeCost;
@property (nonatomic) NSArray sectionList;
@property (nonatomic) q resultStatus;
- (id)boxDetection;
- (id)timeCost;
- (void)setBoxDetection:;
- (void)setTimeCost:;
- (long long)resultStatus;
- (void).cxx_destruct;
- (void)setResultStatus:;
- (void)setSectionList:;
- (id)sectionList;
+ (id)sectionListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
