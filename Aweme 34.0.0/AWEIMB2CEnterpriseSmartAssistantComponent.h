@interface AWEIMB2CEnterpriseSmartAssistantComponent : AWEIMComponentBase
@property (nonatomic) BOOL enableSmartAssistant;
@property (nonatomic) <AWEIMInputViewControllerProtocol> inputVCProtocolImp;
@property (nonatomic) <AWEIMMessageSearchGiphyService> messageSearchGiphyService;
@property (nonatomic) AWEIMB2CBottomFloatingAndPanelViewController smartAssistantBottomFloatingViewController;
@property (nonatomic) AWEIMB2CBottomFloatingAndPanelViewController smartAssistantPanelViewController;
@property (nonatomic) NSArray smartAssistantItems;
@property (nonatomic) NSArray quickReplyItems;
@property (nonatomic) Q scene;
@property (nonatomic) UIViewController<IESIMSheetVCProtocol> guideSheet;
@property (nonatomic) BOOL isGuideSheetShowing;
@property (nonatomic) BOOL isCopyToInputVC;
@property (nonatomic) NSString currentInputText;
@property (nonatomic) NSString sendMessageText;
@property (nonatomic) BOOL hasBackgroundImage;
@property (nonatomic) BOOL hasShownQuickReply;
@property (nonatomic) <AWEIMMessageListBottomFloatingInterface> bottomFloatingService;
@property (nonatomic) BOOL keyboardShow;
@property (nonatomic) NSInteger recommendId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <IESLCMessageHandlerProtocol> messageHandler;
@property (nonatomic) BOOL showInFloatMode;
@property (nonatomic) @? continueBlock;
@property (nonatomic) @? removeBlock;
@property (nonatomic) BOOL invalid;
@property (nonatomic) Q priorityValue;
- (void)sheetDidDismiss:;
- (void)ieslc_messageHandler:didReceiveMsg:;
- (BOOL)showInFloatMode;
- (void)setShowInFloatMode:;
- (id)removeBlock;
- (void)setRemoveBlock:;
- (void)hideViewIfNeed;
- (void)showViewIfNeed;
- (id)shouldContinueForPriorityObject:;
- (id)shouldRemoveForPriorityObject:;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (void)inputViewTypeDidChange:oldInputViewType:;
- (id)viewToDisplayInBottomContainer;
- (BOOL)canShowBarWhenInputTypeChangedTo:;
- (void)companyMenuDisplayStatusDidChange:;
- (void)inputStateDidChangeWithText:withGrowingTextView:;
- (void)didSendTextMessage:userInfo:;
- (id)conversationInfoOtherRequestParams;
- (void)updateConversationInfoOtherData:source:;
- (void)handleKeyboardWillHideNotification:;
- (void)handleKeyboardWillShowNotification:;
- (void)setKeyboardShow:;
- (BOOL)keyboardShow;
- (void)setGuideSheet:;
- (id)guideSheet;
- (void)linkTextBehaviorOccursWith:message:;
- (id)bottomFloatingService;
- (void)setBottomFloatingService:;
- (void)actionBarDidClickAction:;
- (int)recommendId;
- (void)didSelectViewModel:;
- (void)didShowViewModel:;
- (void)dismissBottomFloatingView;
- (BOOL)hasSetedBackgroundImage;
- (void)didClickOnCloseBtn;
- (void)__chatBackgroundDidChangeNty:;
- (void)__registerAndDispatchBottomFloatingView;
- (void)__dismissAndInvalidateBottomFloatingView;
- (void)setMessageSearchGiphyService:;
- (void)setInputVCProtocolImp:;
- (id)smartAssistantBottomFloatingViewController;
- (id)smartAssistantPanelViewController;
- (void)setSmartAssistantItems:;
- (void)setQuickReplyItems:;
- (id)messageSearchGiphyService;
- (id)__constructCellViewModelsFromSuggestMsg:;
- (id)__getSuggestSourceStringWithSource:;
- (id)__getPanelTypeWithScene;
- (void)setRecommendId:;
- (id)__constructCellViewModelsFromReplyList:;
- (void)handleReplyViewModelsForTrackers:recommendId:;
- (BOOL)isGuideSheetShowing;
- (id)smartAssistantItems;
- (id)quickReplyItems;
- (void)setHasShownQuickReply:;
- (void)__refreshCurrentSceneToCellViewModels:;
- (id)__tansferSmartAssistantComponetInfoFromJSONModel:;
- (id)__transferSmartAssistantSuggestMsgFromJSONModel:;
- (id)sendMessageText;
- (void)setSendMessageText:;
- (BOOL)enableSmartAssistant;
- (void)__didClickComfirmButton;
- (void)setIsGuideSheetShowing:;
- (id)__constructCellViewModelsFromJSONSuggestMsg:;
- (void)setEnableSmartAssistant:;
- (void)__fetchSuggestMessagesOrQuickReplyIfNeeded;
- (void)__showGuidePopupViewIfNeeded;
- (void)__handleReceivedPushServiceWithMsg:;
- (id)inputVCProtocolImp;
- (void)setIsCopyToInputVC:;
- (void)addSmartAssistantItemsParams:viewModel:;
- (BOOL)isCopyToInputVC;
- (void)setCurrentInputText:;
- (id)currentInputText;
- (void)__sendPushMessageWithQuickReplyContent:;
- (BOOL)hasShownQuickReply;
- (void)setSmartAssistantPanelViewController:;
- (void)setSmartAssistantBottomFloatingViewController:;
- (void)setScene:;
- (void)dealloc;
- (unsigned long long)scene;
- (void)setInvalid:;
- (void).cxx_destruct;
- (BOOL)invalid;
- (id)conversation;
- (BOOL)hasBackgroundImage;
- (void)setHasBackgroundImage:;
- (id)continueBlock;
- (void)setContinueBlock:;
- (id)hostViewController;
- (unsigned long long)priorityValue;
- (void)setPriorityValue:;
+ (BOOL)canCreateComponentWithContext:;
@end
