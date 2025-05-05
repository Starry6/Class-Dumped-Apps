@interface VNDataDetectorResult : NSObject
@property (nonatomic) DDScannerResult scannerResult;
@property (nonatomic) NSString shortDescription;
@property (nonatomic) NSString value;
@property (nonatomic) Q type;
@property (nonatomic) VNObservation originalObservation;
@property (nonatomic) BCSDetectedCode detectedBarcodeSupportCode;
- (id)shortDescription;
- (void)setType:;
- (id)debugDescription;
- (void)setValue:;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)value;
- (id)initWithDDScannerResult:observation:;
- (id)initWithBCSDetectedCode:description:observation:;
- (id)scannerResult;
- (void)setScannerResult:;
- (void)setShortDescription:;
- (id)originalObservation;
- (void)setOriginalObservation:;
- (id)detectedBarcodeSupportCode;
- (void)setDetectedBarcodeSupportCode:;
@end
