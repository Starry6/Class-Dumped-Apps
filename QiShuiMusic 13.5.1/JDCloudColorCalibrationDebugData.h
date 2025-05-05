@interface JDCloudColorCalibrationDebugData : NSObject
@property (nonatomic) ^{__CVBuffer=} debugImage;
@property (nonatomic) NSData debugPointCloud;
@property (nonatomic) I debugPointCloudSize;
@property (nonatomic) NSDictionary debugDict;
- (void)dealloc;
- (void).cxx_destruct;
- (id)debugImage;
- (id)initWithDebugImage:pointCloud:pointCloudSize:;
- (id)debugPointCloud;
- (unsigned int)debugPointCloudSize;
- (id)debugDict;
@end
