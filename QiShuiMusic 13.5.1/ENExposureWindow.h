@interface ENExposureWindow : NSObject
@property (nonatomic) C calibrationConfidence;
@property (nonatomic) NSDate date;
@property (nonatomic) I diagnosisReportType;
@property (nonatomic) I infectiousness;
@property (nonatomic) NSArray scanInstances;
@property (nonatomic) I variantOfConcernType;
- (void)encodeWithXPCObject:;
- (id)initWithXPCObject:error:;
- (id)date;
- (void).cxx_destruct;
- (void)setDate:;
- (id)description;
- (id)scanInstances;
- (void)setDiagnosisReportType:;
- (unsigned int)diagnosisReportType;
- (void)setVariantOfConcernType:;
- (unsigned int)infectiousness;
- (void)setInfectiousness:;
- (void)setScanInstances:;
- (void)setCalibrationConfidence:;
- (unsigned int)variantOfConcernType;
- (unsigned char)calibrationConfidence;
@end
