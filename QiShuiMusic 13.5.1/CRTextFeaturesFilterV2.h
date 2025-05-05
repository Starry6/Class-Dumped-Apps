@interface CRTextFeaturesFilterV2 : NSObject
@property (nonatomic) NSString preferredLocale;
@property (nonatomic) <CRSingleTextFeatureFiltering> latinLowConfidenceFilter;
@property (nonatomic) <CRSingleTextFeatureFiltering> chineseLowConfidenceFilter;
@property (nonatomic) <CRSingleTextFeatureFiltering> japaneseLowConfidenceFilter;
@property (nonatomic) <CRSingleTextFeatureFiltering> koreanLowConfidenceFilter;
- (void).cxx_destruct;
- (id)initWithLocale:;
- (id)preferredLocale;
- (void)setPreferredLocale:;
- (id)filterFeatures:;
- (id)filterBlocks:imageSize:;
- (id)_imageSpaceGeometryForTextFeatures:imageSize:;
- (id)_pointInImageSpace:imageSize:;
- (double)_distanceFromPoint1:toPoint2:;
- (id)_filterForFeature:;
- (id)latinLowConfidenceFilter;
- (void)setLatinLowConfidenceFilter:;
- (id)chineseLowConfidenceFilter;
- (void)setChineseLowConfidenceFilter:;
- (id)japaneseLowConfidenceFilter;
- (void)setJapaneseLowConfidenceFilter:;
- (id)koreanLowConfidenceFilter;
- (void)setKoreanLowConfidenceFilter:;
@end
