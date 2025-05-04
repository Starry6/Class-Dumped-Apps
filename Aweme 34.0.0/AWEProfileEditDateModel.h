@interface AWEProfileEditDateModel : NSObject
@property (nonatomic) UIViewController controller;
@property (nonatomic) UIColor backgroundColor;
@property (nonatomic) BOOL showHideSwitch;
@property (nonatomic) BOOL switchIsOn;
@property (nonatomic) BOOL showCancelButton;
@property (nonatomic) NSString birthday;
- (BOOL)switchIsOn;
- (BOOL)showHideSwitch;
- (void)setShowHideSwitch:;
- (void)setController:;
- (id)birthday;
- (id)backgroundColor;
- (void)setBackgroundColor:;
- (void).cxx_destruct;
- (id)controller;
- (void)setBirthday:;
- (void)setShowCancelButton:;
- (void)setSwitchIsOn:;
- (BOOL)showCancelButton;
@end
