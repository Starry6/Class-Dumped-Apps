@interface AWELandscapeDetailViewModel : AWEBaseListViewModel
@property (nonatomic) BOOL isExpanded;
- (void)fetchListData;
- (void)loadMoreListData;
- (void)updateWithModel:dataController:;
- (id)buildRelatedSectionWithModel:dataController:;
- (void)setIsExpanded:;
- (BOOL)isExpanded;
@end
