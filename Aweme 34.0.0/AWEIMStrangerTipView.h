@interface AWEIMStrangerTipView : UIView
@property (nonatomic) NSString tip;
@property (nonatomic) UILabel tipLabel;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) @? closeBlock;
@property (nonatomic) UIView lineView;
- (void)setCloseBlock:;
- (id)closeBlock;
- (void)didClickCloseButton:;
- (id)initWithFrame:block:;
- (id)init;
- (id)initWithFrame:;
- (void)setup;
- (void).cxx_destruct;
- (id)tip;
- (void)layoutSubviews;
- (void)setTip:;
- (id)lineView;
- (void)setLineView:;
- (void)setTipLabel:;
- (id)tipLabel;
- (void)setCloseButton:;
- (id)closeButton;
@end
