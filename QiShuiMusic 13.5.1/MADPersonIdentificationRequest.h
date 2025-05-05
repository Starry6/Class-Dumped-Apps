@interface MADPersonIdentificationRequest : MADRequest
@property (nonatomic) Q faceDetectorVisionRevision;
@property (nonatomic) BOOL allowOnDemand;
@property (nonatomic) Q maximumFaceCount;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (void)setMaximumFaceCount:;
- (BOOL)allowOnDemand;
- (unsigned long long)faceDetectorVisionRevision;
- (unsigned long long)maximumFaceCount;
- (void)setFaceDetectorVisionRevision:;
- (void)setAllowOnDemand:;
+ (BOOL)supportsSecureCoding;
@end
