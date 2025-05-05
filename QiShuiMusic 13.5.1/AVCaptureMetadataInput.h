@interface AVCaptureMetadataInput : AVCaptureInput
- (id)init;
- (id)clock;
- (void)dealloc;
- (id)sourceID;
- (id)ports;
- (id)initWithFormatDescription:clock:;
- (BOOL)appendTimedMetadataGroup:error:;
+ (id)metadataInputWithFormatDescription:clock:;
@end
