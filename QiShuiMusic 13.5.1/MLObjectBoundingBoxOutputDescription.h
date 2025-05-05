@interface MLObjectBoundingBoxOutputDescription : NSObject
@property (nonatomic) NSInteger format;
@property (nonatomic) NSString confidenceFeatureName;
@property (nonatomic) NSString coordinatesFeatureName;
@property (nonatomic) NSArray labelNames;
- (void)setFormat:;
- (int)format;
- (void).cxx_destruct;
- (id)labelNames;
- (void)setLabelNames:;
- (id)confidenceFeatureName;
- (void)setConfidenceFeatureName:;
- (id)coordinatesFeatureName;
- (void)setCoordinatesFeatureName:;
@end
