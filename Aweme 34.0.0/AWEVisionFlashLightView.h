@interface AWEVisionFlashLightView : UIView
@property (nonatomic) DUXBaseButton button;
@property (nonatomic) DUXBaseLabel label;
- (void)setupSubViews;
- (void)turnOn;
- (void)makeTransform:withOrientation:;
- (void)updateButtonAccessibility;
- (void)setLabel:;
- (id)init;
- (void)setButton:;
- (id)label;
- (BOOL)isOn;
- (void).cxx_destruct;
- (id)button;
- (void)turnOff;
@end
