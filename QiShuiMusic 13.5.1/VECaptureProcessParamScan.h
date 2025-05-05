@interface VECaptureProcessParamScan : VECaptureProcessParam
@property (nonatomic) NSInteger scanType;
@property (nonatomic) float scriptTimeout;
@property (nonatomic) NSInteger maxObjNum;
@property (nonatomic) NSInteger maxTrackNum;
- (void)setMaxTrackNum:;
- (int)maxObjNum;
- (int)maxTrackNum;
- (float)scriptTimeout;
- (void)setMaxObjNum:;
- (void)setScriptTimeout:;
- (id)init;
- (int)scanType;
- (void)setScanType:;
@end
