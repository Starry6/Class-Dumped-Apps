@interface CNPropertyPhoneNumberCell : CNPropertySimpleTransportCell
@property (nonatomic) UIImageView emergencyImageView;
@property (nonatomic) BOOL emergencyPhoneNumber;
- (void)setProperty:;
- (id)initWithStyle:reuseIdentifier:;
- (void)copy:;
- (void).cxx_destruct;
- (BOOL)shouldPerformDefaultAction;
- (void)updateTransportButtons;
- (void)setEmergencyPhoneNumber:;
- (BOOL)shouldShowEmergencyBadge;
- (void)updateEmergencyBadge;
- (void)buildEmergencyImageView;
- (BOOL)isEmergencyPhoneNumber;
- (id)emergencyImageView;
- (void)setEmergencyImageView:;
@end
