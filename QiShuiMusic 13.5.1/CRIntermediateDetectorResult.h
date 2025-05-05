@interface CRIntermediateDetectorResult : NSObject
@property (nonatomic) NSMutableArray pyramidPreIntraScaleNMSTextFeatures;
@property (nonatomic) NSMutableArray pyramidPostIntraScaleNMSTextFeatures;
@property (nonatomic) NSMutableArray pyramidPostInterScaleNMSTextFeatures;
@property (nonatomic) NSMutableArray pyramidScaleSize;
- (void).cxx_destruct;
- (id)pyramidPreIntraScaleNMSTextFeatures;
- (void)setPyramidPreIntraScaleNMSTextFeatures:;
- (id)pyramidPostIntraScaleNMSTextFeatures;
- (void)setPyramidPostIntraScaleNMSTextFeatures:;
- (id)pyramidPostInterScaleNMSTextFeatures;
- (void)setPyramidPostInterScaleNMSTextFeatures:;
- (id)pyramidScaleSize;
- (void)setPyramidScaleSize:;
- (id)initWithNumberOfScales:;
@end
