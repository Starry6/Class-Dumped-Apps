@interface VKCMRCMADWrappedDataDetectorElement : VKCMRCDataDetectorElement
@property (nonatomic) DDScannerResult scannerResult;
@property (nonatomic) Q dataDetectorTypes;
@property (nonatomic) VKQuad quad;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} boundingBox;
- (void)setDataDetectorTypes:;
- (id)boundingBox;
- (unsigned long long)dataDetectorTypes;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)quad;
- (void)setBoundingBox:;
- (void)setQuad:;
- (id)boundingQuads;
- (id)scannerResult;
- (void)setScannerResult:;
- (id)initWithMADMRCResultItem:scannerResult:;
- (id)initWithScannerResult:quad:;
+ (BOOL)supportsSecureCoding;
@end
