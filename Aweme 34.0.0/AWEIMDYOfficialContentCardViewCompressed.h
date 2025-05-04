@interface AWEIMDYOfficialContentCardViewCompressed : AWEIMDYOfficialContentCardView
@property (nonatomic) AWEIMOfficialContentDetailCardViewCompress detailCardView;
@property (nonatomic) UIView contentContainerView;
- (void)awe_themeDidChange:;
- (void)__addSubViews;
- (double)p_calculateYYlabelWidth;
- (void)p_makeUnfoldedCellContrain;
- (void)p_makeFoldedCellConstrain;
- (void)addConstrains;
- (void)configWithModel:context:needTrackEvent:;
- (void)configNumberInfoView;
- (BOOL)hasNumberInfoStruct;
- (id)detailCardView;
- (void)setDetailCardView:;
- (id)contentContainerView;
- (void)setContentContainerView:;
- (void).cxx_destruct;
@end
