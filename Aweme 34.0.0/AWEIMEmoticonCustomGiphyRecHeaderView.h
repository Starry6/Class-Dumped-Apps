@interface AWEIMEmoticonCustomGiphyRecHeaderView : UICollectionReusableView
@property (nonatomic) UIView<IESIMGradientViewProtocol> lineViewLeft;
@property (nonatomic) UIView<IESIMGradientViewProtocol> lineViewRight;
@property (nonatomic) @? didClickCloseBlock;
- (void)p_setupUI;
- (void)setLineViewLeft:;
- (void)setLineViewRight:;
- (id)lineViewLeft;
- (id)lineViewRight;
- (void)setDidClickCloseBlock:;
- (id)didClickCloseBlock;
- (void)reconfigureUIIfNeededWithContext:;
- (void)p_closeTapped;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void).cxx_destruct;
@end
