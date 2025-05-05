@interface IESLivePinCommentCell : IESLivePinCommentBaseCell
@property (nonatomic) IESLivePinCommentCheckTipView checkTipView;
- (id)paramsWithNode:;
- (id)checkTipView;
- (void)configWithNode:containerWidth:;
- (void)setCheckTipView:;
- (void)setupSubViews;
- (void)prepareForReuse;
- (void).cxx_destruct;
@end
