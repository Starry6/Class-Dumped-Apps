@interface AWEMusicCollectionSongSectionViewModel : NSObject
@property (nonatomic) AWEMusicCollectionSectionHeaderView headerView;
@property (nonatomic) AWEMusicCollectionSongEmptyFooterView emptyFooterView;
@property (nonatomic) NSString title;
@property (nonatomic) NSArray cellModelArray;
@property (nonatomic) q totalCount;
@property (nonatomic) BOOL showEmptyView;
@property (nonatomic) @? toFindMusicClickBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)showEmptyView;
- (id)cellModelArray;
- (void)setCellModelArray:;
- (id)cellViewModelArray;
- (id)sectionFooterView;
- (id)toFindMusicClickBlock;
- (void)setToFindMusicClickBlock:;
- (id)emptyFooterView;
- (void)setShowEmptyView:;
- (void)setEmptyFooterView:;
- (id)initWithTitle:;
- (double)sectionHeaderHeight;
- (double)sectionFooterHeight;
- (long long)totalCount;
- (long long)numberOfRows;
- (id)headerView;
- (void).cxx_destruct;
- (id)title;
- (void)setHeaderView:;
- (void)setTitle:;
- (id)sectionHeaderView;
- (void)setTotalCount:;
@end
