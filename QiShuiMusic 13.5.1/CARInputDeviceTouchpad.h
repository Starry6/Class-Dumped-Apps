@interface CARInputDeviceTouchpad : CARInputDevice
@property (nonatomic) double sensitivity;
@property (nonatomic) <CARInputDeviceTouchpadDelegate> delegate;
@property (nonatomic) {CGSize=dd} physicalSize;
@property (nonatomic) BOOL characterRecognitionSupported;
@property (nonatomic) BOOL feedbackSupported;
@property (nonatomic) Q supportedFeedbackTypes;
- (void)_setDelegate:;
- (void)setDelegate:;
- (id)physicalSize;
- (id)delegate;
- (void).cxx_destruct;
- (id)description;
- (double)sensitivity;
- (void)performFeedbackOfType:;
- (BOOL)feedbackSupported;
- (unsigned long long)supportedFeedbackTypes;
- (id)initWithServiceClient:UUID:settings:delegate:;
- (void)updateSettingsWithSettings:;
- (id)_physicalSizeForTouchpadServiceClient:;
- (BOOL)_characterRecognitionSupportedForServiceClient:;
- (id)_initWithSupportedHapticTypes:physicalSize:characterRecognitionSupported:senderID:UUID:;
- (void)setSensitivity:;
- (BOOL)characterRecognitionSupported;
+ (id)physicalSizeForTouchpadWithDigitizerProperties:;
@end
