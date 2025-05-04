@interface AWEIMRTVInviteFriendPresenter : AWEIMRTVBaseListSelectPresenter
@property (nonatomic) q maxCanSelectCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)listSelectBaseViewController:canSelectWithCellModel:;
- (void)listSelectBaseViewController:didSelectCellModel:;
- (void)listSelectBaseViewController:didSelectedChange:;
- (id)__selectViewControllerContextWithMaxSelectCount:;
- (id)__listSelectModelWithDefaultSelectedSecIDs:preferredSelectSecUIDs:;
- (void)selectFriendWithConfiguration:callback:;
- (void)setMaxCanSelectCount:;
- (long long)maxCanSelectCount;
- (long long)__maxCanSelectCountWithDefaultSelectionCount:;
- (BOOL)__canSelectMoreUserWithController:;
@end
