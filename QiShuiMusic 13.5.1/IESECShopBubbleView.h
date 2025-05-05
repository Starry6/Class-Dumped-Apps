@interface IESECShopBubbleView : UIView
@property (nonatomic) UIView bodyView;
@property (nonatomic) UIImageView arrowView;
@property (nonatomic) UILabel textLabel;
@property (nonatomic) q style;
@property (nonatomic) BOOL hasOffset;
@property (nonatomic) double extraOffset;
- (void)setExtraOffset:;
- (double)extraOffset;
- (id)initWithBubbleText:style:;
- (id)textLabel;
- (BOOL)hasOffset;
- (void)layoutSubviews;
- (void)setStyle:;
- (void).cxx_destruct;
- (void)setHasOffset:;
- (long long)style;
- (void)setTextLabel:;
- (id)arrowView;
- (void)setArrowView:;
- (id)bodyView;
- (void)setBodyView:;
- (void)setupView;
- (void)updateBackgroundColor:;
@end
