@interface AWEECOMIMFootDescSourceView : UIView
@property (nonatomic) UIView topLine;
@property (nonatomic) YYLabel sourceLabel;
- (void)setSourceLabel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;
- (id)sourceLabel;
- (void)updateWithModel:;
- (id)topLine;
- (void)setTopLine:;
+ (double)designHeight;
+ (id)attributedTextWithModel:;
+ (double)designWidthWithModel:maxWidth:;
@end
