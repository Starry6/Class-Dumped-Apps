@interface AVMetadataMachineReadableCodeObject : AVMetadataObject
@property (nonatomic) CIBarcodeDescriptor descriptor;
@property (nonatomic) NSArray corners;
@property (nonatomic) NSString stringValue;
- (id)descriptor;
- (void)dealloc;
- (id)stringValue;
- (id)description;
- (id)corners;
- (id)initDerivedMetadataObjectFromMetadataObject:withTransform:isVideoMirrored:rollAdjustment:;
- (id)basicDescriptor;
- (id)initWithFigEmbeddedCaptureDeviceMachineReadableCodeDictionary:input:;
- (id)initWithAppClipCodeDictionary:input:;
+ (id)machineReadableCodeObjectWithFigEmbeddedCaptureDeviceMachineReadableCodeDictionary:input:;
+ (id)machineReadableCodeObjectWithAppClipCodeDictionary:input:;
@end
