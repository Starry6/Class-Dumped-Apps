@interface AWEIMThirdPartShareButton : UIButton
@property (nonatomic) UIView lineView;
@property (nonatomic) @? actionBlock;
- (id)initWithTitle:actionBlock:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)lineView;
- (void)setLineView:;
- (void)setActionBlock:;
- (id)actionBlock;
@end
