@interface IESECFittingSingleLineLabel : UIView
@property (nonatomic) UIFont font;
@property (nonatomic) UIColor textColor;
@property (nonatomic) NSArray elements;
@property (nonatomic) NSString separator;
- (void)setSeparator:;
- (void)layoutSubviews;
- (id)elements;
- (void)setElements:;
- (void)setFont:;
- (id)initWithFrame:;
- (void)setTextColor:;
- (void).cxx_destruct;
- (id)font;
- (id)textColor;
- (id)separator;
- (void)setupSubviews;
@end
