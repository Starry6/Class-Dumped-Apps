@interface SUCoreMAIdentifier : NSObject
@property (nonatomic) NSString productVersion;
@property (nonatomic) NSString productBuildVersion;
@property (nonatomic) NSString releaseType;
@property (nonatomic) NSData measurement;
@property (nonatomic) NSString measurementAlgorithm;
- (void)setProductVersion:;
- (id)productVersion;
- (void)setReleaseType:;
- (id)initWithCoder:;
- (void)setMeasurement:;
- (id)releaseType;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)productBuildVersion;
- (id)measurement;
- (id)description;
- (BOOL)isEqual:;
- (void)setProductBuildVersion:;
- (id)initWithProductVersion:productBuildVersion:releaseType:measurement:measurementAlgorithm:;
- (id)measurementAlgorithm;
- (void)setMeasurementAlgorithm:;
+ (BOOL)supportsSecureCoding;
@end
