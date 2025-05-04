@interface AWEPlayInteractionLiveAppointmentGuideView : UIView
@property (nonatomic) UIView appointmentContentView;
@property (nonatomic) UILabel dateLabel;
@property (nonatomic) UIView dividerLine;
@property (nonatomic) UILabel appointmentLabel;
@property (nonatomic) UILabel appointmentNextLabel;
- (void)updateWithModel:isClick:;
- (id)appointmentContentView;
- (id)appointmentLabel;
- (id)appointmentNextLabel;
- (void)setAppointmentContentView:;
- (void)setAppointmentLabel:;
- (void)setAppointmentNextLabel:;
- (id)accessibilityLabel;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (id)dateLabel;
- (void)setupUI;
- (void)setDateLabel:;
- (void)setDividerLine:;
- (id)dividerLine;
@end
