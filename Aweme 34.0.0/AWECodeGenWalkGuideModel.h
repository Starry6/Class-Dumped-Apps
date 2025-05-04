@interface AWECodeGenWalkGuideModel : AWEBaseDataModel
@property (nonatomic) AWECodeGenSicilyUrlModel guideImageModel;
@property (nonatomic) AWECodeGenSicilyUrlModel guideImageThumbModel;
@property (nonatomic) NSString guideText;
- (id)guideText;
- (void)setGuideText:;
- (id)guideImageModel;
- (void)setGuideImageModel:;
- (id)guideImageThumbModel;
- (void)setGuideImageThumbModel:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
