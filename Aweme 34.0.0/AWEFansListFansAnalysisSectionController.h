@interface AWEFansListFansAnalysisSectionController : AWEBaseListSectionController
@property (nonatomic) AWEFansListFansAnalysisView fansAnalysisView;
- (void)configCell:index:model:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (id)fansAnalysisView;
- (void)setFansAnalysisView:;
- (BOOL)canShowFansAnalysisView;
- (id)separatorColor;
- (id)sectionBackgroundColor;
- (Class)cellClass;
- (void).cxx_destruct;
@end
