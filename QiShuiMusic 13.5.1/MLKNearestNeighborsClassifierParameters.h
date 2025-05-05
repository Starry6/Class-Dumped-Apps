@interface MLKNearestNeighborsClassifierParameters : NSObject
@property (nonatomic) Q numberOfDimensions;
@property (nonatomic) q weightingScheme;
@property (nonatomic) q indexType;
@property (nonatomic) Q leafSize;
@property (nonatomic) NSObject defaultLabel;
@property (nonatomic) NSString nearestLabelsFeatureName;
@property (nonatomic) NSString nearestDistancesFeatureName;
- (void)setIndexType:;
- (void)setWeightingScheme:;
- (long long)indexType;
- (void).cxx_destruct;
- (long long)weightingScheme;
- (unsigned long long)numberOfDimensions;
- (id)defaultLabel;
- (void)setDefaultLabel:;
- (void)setNumberOfDimensions:;
- (id)nearestLabelsFeatureName;
- (void)setNearestLabelsFeatureName:;
- (id)nearestDistancesFeatureName;
- (void)setNearestDistancesFeatureName:;
- (unsigned long long)leafSize;
- (void)setLeafSize:;
@end
