@interface IESIMPOITagRateGradeModel : MTLModel
@property (nonatomic) Q gradeType;
@property (nonatomic) NSString gradeText;
@property (nonatomic) IESIMURLModel selectedImageURL;
@property (nonatomic) IESIMURLModel unselectedImageURL;
@property (nonatomic) NSArray rateTags;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)gradeText;
- (id)rateTags;
- (id)selectedImageURL;
- (void)setGradeText:;
- (void)setGradeType:;
- (void)setRateTags:;
- (void)setSelectedImageURL:;
- (void)setUnselectedImageURL:;
- (id)unselectedImageURL;
- (void).cxx_destruct;
- (unsigned long long)gradeType;
+ (id)rateTagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
