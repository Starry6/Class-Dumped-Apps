@interface AWEFeedNewDoubleColumnSearchAfterClickController : AWEDCFeedBaseController
@property (nonatomic) AWEFeedLRUCache LRUCache;
@property (nonatomic) AWEAwemeModel lastClickModel;
@property (nonatomic) Q lastClickTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)containerCollectionView:willDisplayCell:forItemAtIndexPath:;
- (void)enterDetailVCAtIndexPath:withModel:referString:selectedCell:;
- (void)enterGraphicsDetailAtIndexPath:withModel:referString:selectedCell:;
- (void)enterInsAtIndexPath:withModel:referString:selectedCell:;
- (unsigned long long)lastClickTime;
- (void)setLastClickTime:;
- (void)recordAwemeClickForSearchIfNeeded:;
- (void)recordAwemeInfoForSearchIfNeeded:;
- (void)setLastClickModel:;
- (id)LRUCache;
- (id)lastClickModel;
- (id)getLastShowInfoForSearch;
- (id)getRecentClickAndShowItems;
- (void)setLRUCache:;
- (void).cxx_destruct;
@end
