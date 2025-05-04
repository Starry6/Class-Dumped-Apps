@interface AWEBookImpl.BookDetailPageVideoSectionController : AWEBaseListSectionController
- (void)configCell:index:model:;
- (void)sectionWillDisplayCell:index:model:;
- (void)sectionWillEnterWorkingRange;
- (void)sectionWillStayInScreen:;
- (long long)waterfallColumnCount;
- (id)init;
- (Class)cellClass;
- (void)didSelectItemAtIndex:;
- (id)sizeForItemAtIndex:;
@end
