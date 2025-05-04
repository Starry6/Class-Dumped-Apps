@interface AWEECOMIMFootDescActionItemUIModel : NSObject
@property (nonatomic) Q type;
@property (nonatomic) NSInteger buttonStatus;
@property (nonatomic) NSString iconName;
@property (nonatomic) NSString text;
@property (nonatomic) NSInteger switchButtonStatus;
@property (nonatomic) NSString switchText;
@property (nonatomic) AWEECOMIMFootDescActionItemButtonStyle buttonStyle;
@property (nonatomic) AWEECOMIMFootDescActionItemButtonStyle switchButtonStyle;
- (int)buttonStatus;
- (void)setButtonStatus:;
- (int)switchButtonStatus;
- (void)setSwitchButtonStatus:;
- (id)switchText;
- (void)setSwitchText:;
- (id)switchButtonStyle;
- (void)setSwitchButtonStyle:;
- (void)setText:;
- (id)iconName;
- (id)text;
- (id)buttonStyle;
- (unsigned long long)type;
- (void)setType:;
- (void)setButtonStyle:;
- (void).cxx_destruct;
- (void)setIconName:;
@end
