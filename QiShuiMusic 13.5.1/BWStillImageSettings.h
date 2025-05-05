@interface BWStillImageSettings : NSObject
@property (nonatomic) q settingsID;
@property (nonatomic) FigCaptureStillImageSettings requestedSettings;
@property (nonatomic) BWStillImageCaptureSettings captureSettings;
@property (nonatomic) BWStillImageProcessingSettings processingSettings;
- (id)requestedSettings;
- (void)dealloc;
- (id)processingSettings;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)initWithRequestedSettings:captureSettings:processingSettings:;
- (id)captureSettings;
- (long long)settingsID;
- (id)description;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
@end
