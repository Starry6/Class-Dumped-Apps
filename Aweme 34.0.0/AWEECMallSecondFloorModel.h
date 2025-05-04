@interface AWEECMallSecondFloorModel : MTLModel
@property (nonatomic) AWEECMallSFSearchResultModel searchResult;
@property (nonatomic) NSArray activityResults;
@property (nonatomic) NSString defaultColor;
@property (nonatomic) NSString bgURL;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bgURL;
- (void)setBgURL:;
- (id)activityResults;
- (void)setActivityResults:;
- (id)searchResult;
- (void)setSearchResult:;
- (void).cxx_destruct;
- (id)defaultColor;
- (void)setDefaultColor:;
+ (id)activityResultsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
