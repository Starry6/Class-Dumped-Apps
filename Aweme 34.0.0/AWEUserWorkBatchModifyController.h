@interface AWEUserWorkBatchModifyController : AWEUserWorkController
@property (nonatomic) <AWEProfileGuidePopoverHelperProtocol> popoverHelper;
@property (nonatomic) <AWEProfileBatchModifyViewControllerProtocol> batchModifyVC;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)containerViewWillAppear:;
- (void)onFetchListDataEndWithReason:response:error:;
- (BOOL)shouldShowLongPressBatchModify;
- (void)enterBatchModifyWithLongPressItem:;
- (BOOL)shouldShowLongPressBatchCache;
- (void)enterBatchCacheWithLongPressItem:;
- (id)batchModifyVC;
- (id)popoverHelper;
- (void)setPopoverHelper:;
- (void)showBatchModifyPopoverIfNeeded;
- (void)setBatchModifyVC:;
- (void)didDeleteAllItems;
- (BOOL)batchModify;
- (void)reloadData;
- (void).cxx_destruct;
- (id)pageContext;
- (void)containerViewDidLoad;
@end
