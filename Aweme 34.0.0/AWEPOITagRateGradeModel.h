@interface AWEPOITagRateGradeModel : MTLModel
@property (nonatomic) Q gradeType;
@property (nonatomic) NSString gradeText;
@property (nonatomic) AWEURLModel selectedImageURL;
@property (nonatomic) AWEURLModel unselectedImageURL;
@property (nonatomic) NSArray rateTags;
@property (nonatomic) NSString uiParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setGradeType:;
- (id)gradeText;
- (void)setGradeText:;
- (id)selectedImageURL;
- (void)setSelectedImageURL:;
- (id)unselectedImageURL;
- (void)setUnselectedImageURL:;
- (id)rateTags;
- (void)setRateTags:;
- (id)uiParams;
- (void)setUiParams:;
- (void).cxx_destruct;
- (unsigned long long)gradeType;
+ (id)rateTagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
