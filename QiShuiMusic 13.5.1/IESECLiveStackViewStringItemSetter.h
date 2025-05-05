@interface IESECLiveStackViewStringItemSetter : IESECLiveStackViewBaseItemSetter
@property (nonatomic) UILabel label;
@property (nonatomic) @? font;
@property (nonatomic) @? textColor;
@property (nonatomic) @? ARGBColor;
- (id)ARGBColor;
- (id)iesec_getItem;
- (id)initWithString:;
- (void)setLabel:;
- (id)label;
- (void).cxx_destruct;
- (id)font;
- (id)textColor;
@end
