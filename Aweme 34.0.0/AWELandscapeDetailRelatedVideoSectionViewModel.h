@interface AWELandscapeDetailRelatedVideoSectionViewModel : AWEBaseListSectionViewModel
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) AWELandscapeRelatedDataController dataController;
- (void)setDataController:;
- (void)fetchSectionData;
- (void)loadMoreSectionData;
- (void)setModel:;
- (id)model;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (id)dataController;
@end
