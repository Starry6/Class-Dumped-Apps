@interface AWEMusicDetailEmptyTipSectionController : AWEBaseDetailHeaderSectionController
@property (nonatomic) UIView emptyTipView;
@property (nonatomic) double emptySectionHeight;
@property (nonatomic) double labelTopset;
- (void)didBindSectionViewModel;
- (id)detailHeaderView;
- (void)updateHeaderViewWithModel:;
- (void)setEmptySectionHeight:;
- (void)setLabelTopset:;
- (id)emptyTipView;
- (double)emptySectionHeight;
- (double)labelTopset;
- (void)setEmptyTipView:;
- (id)init;
- (void).cxx_destruct;
- (double)sectionHeight;
@end
