@interface CRRecognizerConfiguration : NSObject
@property (nonatomic) <CRTextFeatureOrdering> cachedTextFeatureOrder;
@property (nonatomic) <CRTextFeaturesFiltering> cachedTextFeatureFilter;
@property (nonatomic) BOOL optimizeGroupsForStability;
@property (nonatomic) Q revision;
@property (nonatomic) BOOL cpuOnly;
@property (nonatomic) q numTopStringCandidates;
@property (nonatomic) double angleThresholdForRotatedCrops;
@property (nonatomic) <CRTextFeatureOrdering> textFeatureOrder;
@property (nonatomic) <CRTextFeaturesFiltering> textFeatureFilter;
@property (nonatomic) BOOL falsePositiveFilteringDisabled;
@property (nonatomic) BOOL scriptDetectionDisabled;
@property (nonatomic) NSObject<MTLDevice> metalDevice;
@property (nonatomic) BOOL skipRecognition;
- (id)metalDevice;
- (void).cxx_destruct;
- (unsigned long long)revision;
- (id)initWithImageReaderOptions:error:;
- (double)angleThresholdForRotatedCrops;
- (BOOL)cpuOnly;
- (id)initV1DefaultConfigWithOptions:;
- (id)initV2DefaultConfigWithOptions:;
- (id)initV3DefaultConfigWithOptions:;
- (id)textFeatureOrder;
- (id)textFeatureFilter;
- (long long)numTopStringCandidates;
- (BOOL)falsePositiveFilteringDisabled;
- (BOOL)scriptDetectionDisabled;
- (BOOL)skipRecognition;
- (id)cachedTextFeatureOrder;
- (void)setCachedTextFeatureOrder:;
- (id)cachedTextFeatureFilter;
- (void)setCachedTextFeatureFilter:;
- (BOOL)optimizeGroupsForStability;
- (void)setOptimizeGroupsForStability:;
+ (id)supportedLanguagesForVersion:;
+ (id)languageSetFromInputLanguages:supportedLanguages:;
@end
