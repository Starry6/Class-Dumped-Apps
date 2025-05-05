@interface IESLivePinCommentAnswerCell : IESLivePinCommentBaseCell
@property (nonatomic) UILabel descLabel;
@property (nonatomic) IESLivePinCommentCheckTipView checkTipView;
- (id)paramsWithNode:;
- (id)checkTipView;
- (void)configWithNode:containerWidth:;
- (id)descLabel;
- (void)setCheckTipView:;
- (void)setDescLabel:;
- (void)setupSubViews;
- (void)prepareForReuse;
- (void).cxx_destruct;
@end
