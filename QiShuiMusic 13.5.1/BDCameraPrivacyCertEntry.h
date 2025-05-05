@interface BDCameraPrivacyCertEntry : BDPrivacyCertEntry
+ (void)requestAccessCameraWithPrivacyCert:completionHandler:;
+ (void)startRunningWithCaptureSession:privacyCert:error:;
+ (void)stopRunningWithCaptureSession:privacyCert:error:;
@end
