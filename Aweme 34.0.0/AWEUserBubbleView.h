@interface AWEUserBubbleView : UIView
@property (nonatomic) UIColor color;
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) UIImageView bgImageView;
@property (nonatomic) UIImageView arrowImageView;
@property (nonatomic) {CGPoint=dd} anchorPosition;
- (id)initWithContent:direction:margin:offset:font:textAlignment:maxWidth:;
- (void)setupWithDirection:margin:offset:maxWidth:;
- (id)initWithContent:direction:margin:offset:;
- (id)color;
- (void)setColor:;
- (void).cxx_destruct;
- (id)anchorPosition;
- (id)contentLabel;
- (void)setContentLabel:;
- (void)setBgImageView:;
- (id)bgImageView;
- (id)arrowImageView;
- (void)setArrowImageView:;
@end
