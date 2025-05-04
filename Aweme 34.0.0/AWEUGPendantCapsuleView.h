@interface AWEUGPendantCapsuleView : UIView
@property (nonatomic) UILabel textLabel;
@property (nonatomic) NSString timeString;
@property (nonatomic) NSString bgColor;
@property (nonatomic) NSString bdColor;
@property (nonatomic) NSString txtColor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showOnView:;
- (id)txtColor;
- (void)setTxtColor:;
- (void)performUpdateFromState:toState:animated:;
- (void)updateTextString:;
- (void)setBdColor:;
- (id)bdColor;
- (id)textLabel;
- (void)willEnterForeground;
- (void)didEnterBackground;
- (id)init;
- (void).cxx_destruct;
- (void)setTextLabel:;
- (void)setTimeString:;
- (id)timeString;
- (id)bgColor;
- (void)setBgColor:;
@end
