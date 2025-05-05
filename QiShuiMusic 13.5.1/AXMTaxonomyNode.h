@interface AXMTaxonomyNode : NSObject
@property (nonatomic) NSString label;
@property (nonatomic) NSString localizedName;
@property (nonatomic) double confidence;
@property (nonatomic) I sceneClassId;
@property (nonatomic) NSMutableSet detectorSceneClassIds;
- (double)confidence;
- (void)setLocalizedName:;
- (void)setConfidence:;
- (id)localizedName;
- (void)setLabel:;
- (id)label;
- (void).cxx_destruct;
- (unsigned int)sceneClassId;
- (void)setSceneClassId:;
- (id)detectorSceneClassIds;
- (void)setDetectorSceneClassIds:;
@end
