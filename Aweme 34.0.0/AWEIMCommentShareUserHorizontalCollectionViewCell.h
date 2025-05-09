@interface AWEIMCommentShareUserHorizontalCollectionViewCell : UICollectionViewCell
@property (nonatomic) UICollectionView horizontalCollectionView;
@property (nonatomic) AWEIMCommentShareUserHorizontalSectionViewModel cellModel;
@property (nonatomic) NSArray dataList;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSMutableSet trackChatShowSet;
@property (nonatomic) NSMutableSet trackRecentlyChatShowSet;
@property (nonatomic) AWEIMShareInputViewController shareInputVC;
@property (nonatomic) NSArray currentSelectedContacts;
@property (nonatomic) UIView inputMaskView;
@property (nonatomic) q currentSelectNum;
@property (nonatomic) double normalSheetHeight;
@property (nonatomic) UILabel shareLabel;
@property (nonatomic) UIViewController longPressViewController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)p_setupUI;
- (void)setDataList:;
- (void)setCellModel:;
- (void)p_hideKeyboard;
- (void)handleKeyboardShowNoti:;
- (void)handleKeyboardHideNoti:;
- (id)shareInputVC;
- (void)p_getViewModelActiveState;
- (id)horizontalCollectionView;
- (long long)currentSelectNum;
- (void)recoverSelectContacts;
- (id)shareLabel;
- (BOOL)p_shouldAdpatBigFontMode;
- (id)longPressViewController;
- (id)inputMaskView;
- (void)setNormalSheetHeight:;
- (void)handleMultiSelectWithCell:itemModel:;
- (id)currentSelectedContacts;
- (void)tapInputMaskView;
- (void)p_transferToShareList;
- (void)p_closeCommentLongPressMenu:;
- (void)setCurrentSelectNum:;
- (void)setupShareTextViewWithItemModel;
- (void)setCurrentSelectedContacts:;
- (void)removeShareTextView;
- (void)setShareInputVC:;
- (void)createGroupShare:;
- (void)shareToUser;
- (id)plainShareText;
- (BOOL)transpondListCellDelegateDidTapAvatar:itemModel:;
- (BOOL)transpondListCellDelegateDidLongpressAvatar:shareModel:gesRecognizer:;
- (void)moreCellTapped;
- (void)updateCCellWithModel:;
- (void)p_getViewModelRecentlyChatState;
- (void)p_acquireRecentlyChat;
- (void)p_acquireUserActiveWithCompletion:;
- (id)trackRecentlyChatShowSet;
- (id)trackChatShowSet;
- (void)trackShowSendShareTextWithItemModel:;
- (void)trackClickSendShareTextWithItemModel:;
- (void)setHorizontalCollectionView:;
- (void)setLongPressViewController:;
- (void)setTrackChatShowSet:;
- (void)setTrackRecentlyChatShowSet:;
- (void)setInputMaskView:;
- (double)normalSheetHeight;
- (void)setShareLabel:;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)setHasMore:;
- (id)initWithFrame:;
- (void)collectionView:willDisplayCell:forItemAtIndexPath:;
- (BOOL)hasMore;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)cellModel;
- (id)dataList;
- (void)p_addObservers;
@end
