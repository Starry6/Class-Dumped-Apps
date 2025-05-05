@interface IESECNavigationItem : IESECButton
@property (nonatomic) q type;
@property (nonatomic) UIImage image;
@property (nonatomic) {CGSize=dd} imageSize;
@property (nonatomic) NSString text;
@property (nonatomic) NSAttributedString attributedText;
@property (nonatomic) {UIEdgeInsets=dddd} edgeInsets;
@property (nonatomic) @ target;
@property (nonatomic) : sel;
- (void)setSel:;
- (void)setEdgeInsets:;
- (void)setAttributedText:;
- (SEL)sel;
- (void)setText:;
- (void)setType:;
- (void)setImage:;
- (id)edgeInsets;
- (void)setTarget:;
- (long long)type;
- (void).cxx_destruct;
- (id)target;
- (id)attributedText;
- (id)text;
- (id)image;
@end
