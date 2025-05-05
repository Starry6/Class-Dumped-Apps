@interface IESMMTrackerConfigure : NSObject
@property (nonatomic) BOOL useHMD;
@property (nonatomic) NSString deviceID;
@property (nonatomic) NSString userID;
@property (nonatomic) @? transformBlock;
@property (nonatomic) NSDictionary commonParams;
@property (nonatomic) NSString bundleName;
@property (nonatomic) NSArray configHostArray;
@property (nonatomic) NSString performanceUploadHost;
- (id)configHostArray;
- (id)commonParams;
- (id)performanceUploadHost;
- (void)setCommonParams:;
- (void)setConfigHostArray:;
- (void)setPerformanceUploadHost:;
- (void)setUseHMD:;
- (BOOL)useHMD;
- (id)userID;
- (void)setDeviceID:;
- (id)deviceID;
- (void)setBundleName:;
- (void).cxx_destruct;
- (void)setUserID:;
- (id)bundleName;
- (id)transformBlock;
- (void)setTransformBlock:;
@end
