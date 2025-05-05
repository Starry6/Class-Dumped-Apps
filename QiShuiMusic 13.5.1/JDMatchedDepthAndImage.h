@interface JDMatchedDepthAndImage : NSObject
@property (nonatomic) JDTimestampedImage image;
@property (nonatomic) JDTimestampedPointCloud pointCloud;
@property (nonatomic) NSArray originalPointClouds;
- (void)setImage:;
- (void).cxx_destruct;
- (id)image;
- (id)pointCloud;
- (void)setPointCloud:;
- (id)originalPointClouds;
- (void)setOriginalPointClouds:;
@end
