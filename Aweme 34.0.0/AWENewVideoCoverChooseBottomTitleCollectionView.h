@interface AWENewVideoCoverChooseBottomTitleCollectionView : AWECoverChooseBottomTitleCollectionView
@property (nonatomic) UIView topLine;
@property (nonatomic) UIView bottomLine;
- (BOOL)shouldShowDefaultText;
- (Class)collectionCellClass;
- (void)configCell:forModel:selected:;
- (id)collectionFlowLayout;
- (void)configRetryView:withLabel:andButton:;
- (BOOL)shouldForceDisableHintView;
- (void)initSplitLines;
- (id)initWithModel:;
- (void).cxx_destruct;
- (id)lineView;
- (id)topLine;
- (id)bottomLine;
- (void)setBottomLine:;
- (void)setTopLine:;
+ (double)viewHeight;
@end
