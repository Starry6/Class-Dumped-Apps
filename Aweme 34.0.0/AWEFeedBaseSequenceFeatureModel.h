@interface AWEFeedBaseSequenceFeatureModel : AWESequenceFeatureModel
@property (nonatomic) AWEAwemeModel awemeModel;
- (id)awemeModel;
- (void)setAwemeModel:;
- (void)updateFeature:forKey:extra:;
- (id)featureForKey:extra:;
- (void).cxx_destruct;
+ (id)internalFeatures;
@end
