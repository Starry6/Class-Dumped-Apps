@interface AWEBindPhoneNumberTipView : UIView
@property (nonatomic) UILabel tipLabel;
@property (nonatomic) UIButton closeBtn;
@property (nonatomic) Q type;
- (id)closeBtn;
- (void)setCloseBtn:;
- (id)initWithSepLine:;
- (void)addCloseBtnTarget:action:;
- (void)addLabelTapTarget:action:;
- (id)initWithType:sepLine:;
- (id)initWithFrame:;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (void)setTipLabel:;
- (id)tipLabel;
@end
