@interface AWEECOMIMInstanceRetailChatDetailViewController : AWEECOMIMChatDetailViewController
- (id)requestCommonParams;
- (void)registerMsgCells;
- (id)btmPageID;
- (BOOL)needHiddenPhone;
- (void)sendGoodsCardWithItemModel:;
- (void)sendGoodsCardWithItemModel:completion:;
- (void)sendOrderCardWithItemModel:;
- (void)sendOrderCardWithItemModel:completion:;
- (id)pagePigeonBizType;
- (BOOL)canSendUserEnterFromGoodsOrOrder;
- (id)pageNameForPerformanceTracker;
- (long long)pageInbox;
- (BOOL)fetchNeedRefreshMsgCellAvatarAndRefreshShopInfoWithShopId:;
- (void)viewDidLoad;
- (id)serviceType;
- (id)pageName;
@end
