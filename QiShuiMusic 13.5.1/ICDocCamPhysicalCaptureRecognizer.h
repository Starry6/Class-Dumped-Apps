@interface ICDocCamPhysicalCaptureRecognizer : UIGestureRecognizer
@property (nonatomic) q physicalButtonType;
@property (nonatomic) q activeButton;
@property (nonatomic) NSArray desiredButtons;
@property (nonatomic) BOOL suspended;
- (void)pressesCancelled:withEvent:;
- (void)touchesBegan:withEvent:;
- (void)setDesiredButtons:;
- (BOOL)isSuspended;
- (void)_updateApplicationButtonStatus;
- (void)pressesEnded:withEvent:;
- (void)pressesBegan:withEvent:;
- (id)desiredButtons;
- (void)setEnabled:;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithTarget:action:;
- (void)setSuspended:;
- (long long)_captureButtonForPhysicalButtonType:;
- (long long)activeButton;
- (void)setActiveButton:;
- (long long)physicalButtonType;
- (void)setPhysicalButtonType:;
@end
