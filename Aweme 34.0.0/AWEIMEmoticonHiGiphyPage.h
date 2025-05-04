@interface AWEIMEmoticonHiGiphyPage : AWEIMEmoticonBasePage
@property (nonatomic) AWEIMEmoticonPanelContext context;
@property (nonatomic) Q pageType;
@property (nonatomic) Q pageState;
@property (nonatomic) NSObject<AWEIMEmoticonInfoModelProtocol> emoticonInfoModel;
@property (nonatomic) UICollectionViewCell<AWEIMEmoticonPanelPageCollectionViewCell> panelCell;
@property (nonatomic) {CGPoint=dd} contentOffset;
@property (nonatomic) BOOL userSelected;
@property (nonatomic) BOOL didDisplayed;
@property (nonatomic) NSMutableSet trackedEmoticonShowedIDs;
@property (nonatomic) AWEIMEmoticonCollectionListModel listModel;
@property (nonatomic) AWEIMEmoticonThemeModel themeModel;
@property (nonatomic) BOOL needsReloadViewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configTabCollectionViewCell:;
- (void)configPanelCollectionViewCell:;
- (id)panelCellReuseIdentifier;
- (void)registerPanelCollectionView:;
- (void)reloadViewModelIfNeeded;
- (void)willDisplayPanelCell:;
- (void)requestData;
+ (BOOL)canShowInEmoticonTabWithContext:;
+ (id)themeInfoModelWithContext:;
@end
