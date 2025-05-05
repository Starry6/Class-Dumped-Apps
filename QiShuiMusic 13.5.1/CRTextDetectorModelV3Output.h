@interface CRTextDetectorModelV3Output : NSObject
@property (nonatomic) MLMultiArray region_score;
@property (nonatomic) MLMultiArray affinity_score;
@property (nonatomic) MLMultiArray script_feature;
@property (nonatomic) MLMultiArray script_score;
@property (nonatomic) MLMultiArray link_score;
@property (nonatomic) NSSet featureNames;
- (id)featureValueForName:;
- (id)featureNames;
- (void).cxx_destruct;
- (id)initWithRegion_score:affinity_score:script_feature:link_score:;
- (id)initWithRegion_score:affinity_score:script_score:link_score:;
- (id)region_score;
- (void)setRegion_score:;
- (id)affinity_score;
- (void)setAffinity_score:;
- (id)script_feature;
- (void)setScript_feature:;
- (id)script_score;
- (void)setScript_score:;
- (id)link_score;
- (void)setLink_score:;
@end
