@interface AWEPlayInteractionSearchAnchorViewMultiCellBarItemView : UIView
@property (nonatomic) <AWESearchAnchorViewMultiCellBarItemViewProtocol> delegate;
@property (nonatomic) UITapGestureRecognizer tapRecognizer;
@property (nonatomic) AWESearchAnchorModel anchorModel;
@property (nonatomic) q index;
@property (nonatomic) double totalWidth;
- (void)configWithModel:;
- (void)setAnchorModel:;
- (id)anchorModel;
- (void)setTotalWidth:;
- (void)itemViewJumpAction;
- (id)initWithModel:totalWidth:index:;
- (void)setIndex:;
- (long long)index;
- (id)delegate;
- (void).cxx_destruct;
- (id)tapRecognizer;
- (void)setDelegate:;
- (void)setTapRecognizer:;
- (double)totalWidth;
@end
