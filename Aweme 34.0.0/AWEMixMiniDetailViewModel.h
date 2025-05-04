@interface AWEMixMiniDetailViewModel : AWESingleColumnDetailViewModel
- (void)fetchListData;
- (void)loadMoreListData;
- (void)pushMixPanelDetailTableViewControllerWithParams:needLoadPrevious:currentModel:referString:;
- (void)trackParamsWithEvent:params:;
- (void)trackTransferToUserProfile;
- (void)transferToMixDetailWithMethod:;
- (id)filterAwemeList:;
- (void)setupWithContext:;
@end
