@interface IESMMImageScanParam : NSObject
@property (nonatomic) BOOL useExtORI;
@property (nonatomic) IESMMQRScanArea scanArea;
@property (nonatomic) Q algorithm;
@property (nonatomic) double timeout;
@property (nonatomic) BOOL enableDetect;
@property (nonatomic) Q scanType;
@property (nonatomic) BOOL enhanceCamera;
- (BOOL)enableDetect;
- (BOOL)enhanceCamera;
- (id)initWithAlgorithm:useExtORI:scanArea:timeout:;
- (id)scanArea;
- (void)setEnableDetect:;
- (void)setEnhanceCamera:;
- (void)setScanArea:;
- (void)setUseExtORI:;
- (BOOL)useExtORI;
- (unsigned long long)algorithm;
- (void)setTimeout:;
- (void)setAlgorithm:;
- (unsigned long long)scanType;
- (void).cxx_destruct;
- (double)timeout;
- (void)setScanType:;
@end
