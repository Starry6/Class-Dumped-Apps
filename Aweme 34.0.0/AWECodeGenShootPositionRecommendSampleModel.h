@interface AWECodeGenShootPositionRecommendSampleModel : AWEBaseDataModel
@property (nonatomic) AWECodeGenShootPositionModel shootPositionModel;
@property (nonatomic) double score;
@property (nonatomic) BOOL defaultChecked;
- (id)shootPositionModel;
- (void)setShootPositionModel:;
- (void)setScore:;
- (double)score;
- (void).cxx_destruct;
- (BOOL)defaultChecked;
- (void)setDefaultChecked:;
+ (id)JSONKeyPathsByPropertyKey;
@end
