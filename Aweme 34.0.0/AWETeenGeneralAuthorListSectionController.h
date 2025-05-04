@interface AWETeenGeneralAuthorListSectionController : AWETeenGeneralBaseSectionController
@property (nonatomic) AWETeenGeneralAuthorListCardModel listModel;
- (id)cellForItemAtIndex:;
- (void)didUpdateToObject:;
- (BOOL)playEnable;
- (void)cellShow:atIndex:;
- (long long)numberOfItems;
- (void)setListModel:;
- (id)listModel;
- (void).cxx_destruct;
- (id)sizeForItemAtIndex:;
@end
