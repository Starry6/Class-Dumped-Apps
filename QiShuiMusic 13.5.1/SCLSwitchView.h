@interface SCLSwitchView : UIView
@property (nonatomic) UISwitch switchKnob;
@property (nonatomic) UILabel switchLabel;
@property (nonatomic) UIColor tintColor;
@property (nonatomic) UIColor labelColor;
@property (nonatomic) UIFont labelFont;
@property (nonatomic) NSString labelText;
@property (nonatomic) BOOL selected;
- (id)init;
- (id)initWithCoder:;
- (id)initWithFrame:;
- (void)setup;
- (id)tintColor;
- (id)labelColor;
- (id)labelFont;
- (id)labelText;
- (BOOL)isSelected;
- (void)setTintColor:;
- (void)setLabelColor:;
- (void)setLabelFont:;
- (void)setLabelText:;
- (void)setSelected:;
- (id)switchKnob;
- (void)setSwitchKnob:;
- (id)switchLabel;
- (void)setSwitchLabel:;
- (void).cxx_destruct;
@end
