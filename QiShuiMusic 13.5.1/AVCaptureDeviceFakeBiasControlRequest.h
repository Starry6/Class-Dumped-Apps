@interface AVCaptureDeviceFakeBiasControlRequest : AVCaptureDeviceControlRequest
@property (nonatomic) float fakeBias;
@property (nonatomic) {?=qiIq} fakeBiasCompletionTime;
- (float)fakeBias;
- (void)setFakeBias:;
- (id)fakeBiasCompletionTime;
- (void)setFakeBiasCompletionTime:;
@end
