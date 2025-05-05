@interface AVPointCloudData : NSObject
@property (nonatomic) ADJasperPointCloud jasperPointCloud;
@property (nonatomic) I pointCloudFormatType;
@property (nonatomic) q pointCount;
@property (nonatomic) r^ points;
@property (nonatomic) r^f confidenceScores;
@property (nonatomic) r^ pointsAndConfidenceScores;
@property (nonatomic) r* spotIdentifiers;
@property (nonatomic) r* bankIdentifiers;
@property (nonatomic) ^{__CVBuffer=} pointCloudDataBuffer;
@property (nonatomic) q projectorMode;
- (void)dealloc;
- (id)debugDescription;
- (long long)projectorMode;
- (id)description;
- (id)points;
- (long long)pointCount;
- (id)confidenceScores;
- (id)jasperPointCloud;
- (unsigned int)pointCloudFormatType;
- (id)pointsAndConfidenceScores;
- (id)spotIdentifiers;
- (id)bankIdentifiers;
- (id)pointCloudDataBuffer;
- (id)initWithDataBuffer:;
@end
