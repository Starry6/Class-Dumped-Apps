@interface AWEBasicModeSegmentElement : AWEBasicModeFakeElement
@property (nonatomic) UILabel label;
@property (nonatomic) UIView selectedLineView;
@property (nonatomic) NSString text;
@property (nonatomic) BOOL selected;
- (void)p_setup;
- (id)selectedLineView;
- (id)generateLineView;
- (void)setSelectedLineView:;
- (void)setLabel:;
- (void)setText:;
- (id)text;
- (void)setTextColor:;
- (id)label;
- (void).cxx_destruct;
- (BOOL)selected;
- (id)textColor;
- (void)setSelected:;
@end
