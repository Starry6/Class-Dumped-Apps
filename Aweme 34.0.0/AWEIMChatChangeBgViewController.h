@interface AWEIMChatChangeBgViewController : UIViewController
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) UIView autoSyncSwitchView;
@property (nonatomic) NSString conversationID;
@property (nonatomic) <IESIMConversationProtocol> conversation;
@property (nonatomic) AWEIMUser peerUser;
@property (nonatomic) NSMutableArray dataList;
@property (nonatomic) UILabel closeLabel;
@property (nonatomic) UILabel headerLabel;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString currentUsedBgURI;
@property (nonatomic) NSString currentUsedBgOid;
@property (nonatomic) BOOL notDirectSetBackground;
@property (nonatomic) NSString chatThemeModelKey;
@property (nonatomic) NSString previewThemeOid;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEnterFrom:;
- (BOOL)configWithRouterParamDict:;
- (id)enterFrom;
- (void)halfScreenContainerVCWillDismiss:;
- (double)externalAssignTopDragHeight;
- (void)setDataList:;
- (id)closeLabel;
- (id)peerUser;
- (void)setPeerUser:;
- (void)setCloseLabel:;
- (void)backBtnClicked:;
- (void)p_setupData;
- (BOOL)dismissGestureRecognizerShouldBegin;
- (void)p_createCollectionView;
- (void)p_createNaviBar;
- (void)p_closeBtnDidClicked:;
- (void)p_trackWithEvent:otherParams:;
- (void)setNotDirectSetBackground:;
- (void)setChatThemeModelKey:;
- (void)setPreviewThemeOid:;
- (BOOL)notDirectSetBackground;
- (void)setCurrentUsedBgURI:;
- (void)setCurrentUsedBgOid:;
- (id)chatThemeModelKey;
- (id)previewThemeOid;
- (void)p_createTopAlbumHeaderCell;
- (void)p_showAutoSyncSwitchViewIfNeeded;
- (void)p_trackChatBackgroudViewShowOnce;
- (void)p_transferToAlbum;
- (void)p_transferToPreviewPageWithSelectAsset:;
- (void)p_transferToPreviewVC:;
- (void)p_trackPopViewAction:;
- (BOOL)p_isAbleToDisplayAutoSyncEntrence;
- (void)setAutoSyncSwitchView:;
- (id)autoSyncSwitchView;
- (void)p_changeAutoSyncBgSwitch;
- (id)currentUsedBgURI;
- (id)currentUsedBgOid;
- (void)p_transferToPreviewPageWithSelectModel:;
- (id)collectionView:layout:referenceSizeForHeaderInSection:;
- (id)collectionView;
- (id)collectionView:viewForSupplementaryElementOfKind:atIndexPath:;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)viewDidLoad;
- (void)setCollectionView:;
- (void)loadView;
- (id)scrollView;
- (id)conversationID;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void).cxx_destruct;
- (id)preferredContentSize;
- (long long)collectionView:numberOfItemsInSection:;
- (id)conversation;
- (void)setConversationID:;
- (void)setConversation:;
- (void)setHeaderLabel:;
- (id)headerLabel;
- (id)dataList;
@end
