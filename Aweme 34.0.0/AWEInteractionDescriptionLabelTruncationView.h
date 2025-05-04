@interface AWEInteractionDescriptionLabelTruncationView : UIView
@property (nonatomic) YYLabel titleLabel;
@property (nonatomic) UIImageView arrowIcon;
@property (nonatomic) NSAttributedString attributeText;
- (id)attributeText;
- (void)setAttributeText:;
- (id)arrowIcon;
- (void)setArrowIcon:;
- (id)defaultAttributedtext;
- (id)createPlainTextTailLabelWithAttributedText:;
- (id)expandTagFont;
- (id)initWithAttributeText:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
@end
