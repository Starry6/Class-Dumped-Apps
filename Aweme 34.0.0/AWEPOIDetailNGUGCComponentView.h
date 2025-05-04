@interface AWEPOIDetailNGUGCComponentView : DitoComponentView
@property (nonatomic) AWEPOIDetailFeedUgcCell cell;
@property (nonatomic) AWEPOIDetailNGPageContext context;
@property (nonatomic) AWEPOIDetailNGUGCComponentViewModel viewModel;
@property (nonatomic) UIView foldAnimationBackgroundView;
- (void)updateViewModel:;
- (void)startHighlightViewWithColor:delay:duration:;
- (void)lynxDidRemove;
- (id)foldAnimationBackgroundView;
- (void)updateFoldAnimationBackgroundViewWithHeight:;
- (void)setBaseCellClipsToBounds:;
- (void)setFoldAnimationBackgroundView:;
- (id)viewModel;
- (id)initWithFrame:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)cell;
- (void)setCell:;
@end
