@interface AWEDetailDonateStateView : UIView
@property (nonatomic) NSMutableDictionary titleDictionary;
@property (nonatomic) NSMutableDictionary titleColorDictionary;
@property (nonatomic) NSMutableDictionary backgroundColorDictionary;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) q donateState;
- (void)p_setupUI;
- (void)p_updateUI;
- (void)setDonateState:;
- (id)titleColorDictionary;
- (id)backgroundColorDictionary;
- (long long)donateState;
- (void)setTitleColorDictionary:;
- (void)setBackgroundColorDictionary:;
- (id)initWithFrame:;
- (void)setTitle:forState:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setBackgroundColor:forState:;
- (void)setTitleColor:forState:;
- (id)titleDictionary;
- (void)setTitleDictionary:;
@end
