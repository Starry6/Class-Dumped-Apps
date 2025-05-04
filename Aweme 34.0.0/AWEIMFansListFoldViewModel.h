@interface AWEIMFansListFoldViewModel : AWEIMFansBaseViewModel
@property (nonatomic) BOOL hasClickedExpandFooter;
@property (nonatomic) Q state;
- (BOOL)isFromColdPush;
- (long long)rowCountForFansSection;
- (unsigned long long)sectionForFans;
- (void)updateStateWhenBeginRefresh;
- (void)updateStateWhenRefreshByCache;
- (void)updateStateWhenDataChanged;
- (void)setDidFoldOnLastListEntry;
- (long long)displayCountOnFoldState;
- (BOOL)didFoldOnLastListEntry;
- (void)setHasClickedExpandFooter:;
- (BOOL)hasClickedExpandFooter;
- (id)storageFoldKey;
- (void)updateStateWhenBeginExpandFooter;
- (void)updateStateWhenBeginLoadMore;
- (void)expandFooterView:originRowCount:;
- (long long)sectionCount;
- (unsigned long long)state;
- (void)setState:;
@end
