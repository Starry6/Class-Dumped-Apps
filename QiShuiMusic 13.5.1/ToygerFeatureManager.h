@interface ToygerFeatureManager : NSObject
@property (nonatomic) {vector<float feature;
@property (nonatomic) float currentFeatureScore;
@property (nonatomic) NSString version;
- (float)currentFeatureScore;
- (BOOL)loadFeaturewithseckey:faceid:;
- (void)setCurrentFeatureScore:;
- (void)setFeature:;
- (id)feature;
- (void)setVersion:;
- (id)version;
- (void).cxx_destruct;
- (id).cxx_construct;
+ (id)generateTempDatawithFeature:faceQuality:faceid:andVersion:;
+ (void)saveTemplateFeature:faceQuality:withsecKey:faceid:andVersion:toPath:;
@end
