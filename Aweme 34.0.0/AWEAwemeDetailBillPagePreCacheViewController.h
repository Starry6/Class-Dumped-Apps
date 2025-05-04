@interface AWEAwemeDetailBillPagePreCacheViewController : AWEAwemeNewDetailBaseController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configCell:atIndexPath:tableView:;
- (void)preCacheBuyPanelDataWithIndexPath:;
- (void)setBillPageCacheWithModel:cacheModels:;
@end
