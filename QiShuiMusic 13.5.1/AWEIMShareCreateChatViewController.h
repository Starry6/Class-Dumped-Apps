@interface AWEIMShareCreateChatViewController : AWEIMListBaseViewController
@property (nonatomic) AWEIMShareListSelectUserController selectUserController;
@property (nonatomic) BOOL isForwardIMMessage;
@property (nonatomic) BOOL isSharingGroupCommand;
@property (nonatomic) AWEIMShareCurrentGroupListViewController currentGroupVC;
@property (nonatomic) UIView shareHelperView;
@property (nonatomic) NSArray initialItems;
@property (nonatomic) UIView maskView;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} keyboardBounds;
@property (nonatomic) BOOL hasSelectedItem;
@property (nonatomic) BOOL forbidLayout;
@property (nonatomic) AWEIMShareCreateChatNavTitleView titleView;
@property (nonatomic) BOOL shouldTransferLater;
@property (nonatomic) BOOL isFromShareExtension;
@property (nonatomic) NSArray defaultSelectItems;
@property (nonatomic) BOOL isJustSelecting;
@property (nonatomic) BOOL shouldSitckDefaultSelectItems;
@property (nonatomic) AWEIMShareInputViewController shareInputVC;
@property (nonatomic) NSString transferSchema;
@property (nonatomic) BOOL fromOpenPlatform;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)shareHelperView;
- (void)transferToChat:;
- (BOOL)hasSelectedItem;
- (BOOL)isJustSelecting;
- (id)myGroup;
- (void)p_handlePanKeyboardMaskViewGes:;
- (void)p_handleTapKeyboardMaskViewGes:;
- (id)adjustRecnetShareModel:;
- (BOOL)canSelectCellAtIndexPath:;
- (BOOL)canTapCellAtIndexPath:;
- (void)clickCloseButton:;
- (void)clickCreateGroup:;
- (void)clickCreateGroupShare:;
- (void)clickShare:;
- (BOOL)configWithRouterParamDict:;
- (id)createDefaultSelectedShareModelWithIdentifier:;
- (long long)currentFunctin;
- (id)currentGroupVC;
- (id)defaultSelectItems;
- (void)didFinishShareWithShareList:;
- (void)didFocusOnTextfield:;
- (void)dismiss:closeByUser:;
- (BOOL)forbidLayout;
- (BOOL)fromOpenPlatform;
- (id)functionArray;
- (id)iesimui_emptyPageConfigForState:;
- (void)iesimui_emptyPagePrimaryButtonTapped:;
- (void)initInputVCIfNeeded;
- (id)initialItems;
- (BOOL)isDefaultSelectdItem:;
- (BOOL)isForwardIMMessage;
- (BOOL)isFromShareExtension;
- (BOOL)isSharingGroupCommand;
- (id)keyboardBounds;
- (void)messageBaseViewControllerDidAppear:;
- (void)p_handleKeyboardHideNoti:;
- (void)p_handleKeyboardShowNoti:;
- (void)performOpenShareCompletionWithStatusCode:needTransferBack:;
- (void)prepareDataWithRecentContacts:friendContacts:allContacts:completeBlock:;
- (void)resignTextFieldResponder;
- (id)selectUserController;
- (void)setCurrentGroupVC:;
- (void)setDefaultSelectItems:;
- (void)setForbidLayout:;
- (void)setFromOpenPlatform:;
- (void)setHasSelectedItem:;
- (void)setInitialItems:;
- (void)setIsForwardIMMessage:;
- (void)setIsFromShareExtension:;
- (void)setIsJustSelecting:;
- (void)setIsSharingGroupCommand:;
- (void)setKeyboardBounds:;
- (void)setSelectUserController:;
- (void)setShareContext:;
- (void)setShareContext:enterMethod:;
- (void)setShareHelperView:;
- (void)setShareInputVC:;
- (void)setShouldSitckDefaultSelectItems:;
- (void)setShouldTransferLater:;
- (void)setTransferSchema:;
- (BOOL)shareCurrentGroupListViewController:canSelectWithShareModel:;
- (BOOL)shareCurrentGroupListViewController:couldSelectGroup:withSelectedGroup:;
- (void)shareCurrentGroupListViewController:didFinishedSelectedGroup:;
- (double)shareInputHeight;
- (id)shareInputVC;
- (void)shareListSelectUserController:didSentMessage:;
- (void)shareListSelectUserController:didShowAlertVC:;
- (void)shareToUserWithCreateGroup:;
- (BOOL)shouldSitckDefaultSelectItems;
- (BOOL)shouldTransferLater;
- (void)showThirdPartShareSuccessView:;
- (void)tappedFeature:;
- (void)trackEventAboutTargetTypeWithParamDict:;
- (id)transferSchema;
- (void)transferToChatAndShowShareSuccessViewLater;
- (void)updateMaskViewHidden;
- (void)updateMultiselectCount:;
- (void)updateShareHelperViewLayout;
- (void)updateVCTitle;
- (BOOL)textFieldShouldReturn:;
- (id)init;
- (void)setTitleView:;
- (void)dealloc;
- (id)maskView;
- (void)applicationDidEnterBackground:;
- (void)tableView:didSelectRowAtIndexPath:;
- (void).cxx_destruct;
- (id)titleView;
- (void)setMaskView:;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)applicationProtectedDataWillBecomeUnavailable:;
- (void)textFieldDidChange:;
- (void)p_addObservers;
@end
