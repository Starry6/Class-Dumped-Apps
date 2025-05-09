@interface AWEUserWorkCellViewModelPool : NSObject
@property (nonatomic) AWEUserWorkCellComponentConfig componentConfig;
@property (nonatomic) NSMutableDictionary viewModelDict;
@property (nonatomic) BOOL isEmpty;
@property (nonatomic) @? diggCountHasDiffBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)componentConfig;
- (void)refreshWithData:;
- (void)removeAllData;
- (void)configCell:awemeModel:longPressGesture:;
- (id)refreshWithWidth:indexPath:awemeModel:;
- (void)markCell:showWatchVideoMask:;
- (void)configCell:isSelected:awemeModel:chooseCallBack:;
- (void)partOfVisibleStatusChangedWith:;
- (void)handleMemoryWarning:;
- (id)viewModelDict;
- (void)setViewModelDict:;
- (void)setComponentConfig:;
- (id)aAWEPadUserPageAdapter;
- (id)viewModelForData:;
- (long long)minimumNumberOfCellDisplay:height:;
- (void)setDiggCountHasDiffBlock:;
- (id)viewModelWithItemID:;
- (id)tagLabelString:;
- (BOOL)douGuideTagOnItem:needCheckShow:;
- (BOOL)currentVideoMaskViewShow:;
- (void)handleWeakRefreshAwemeNotification:;
- (unsigned long long)weakRefreshSycChangeWith:awemeModelDict:;
- (id)diggCountHasDiffBlock;
- (BOOL)postReachModelRefresh;
- (double)minimumInteritemSpacingWithWidth:;
- (double)minimumLineSpacingWithWidth:;
- (void)removeViewModelWithItemID:;
- (void)changeViewModelKey:viewModel:;
- (void)appendData:;
- (id)init;
- (void)dealloc;
- (Class)cellClass;
- (void)setIsEmpty:;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (void)setupNotifications;
+ (Class)aAWEPadUserPageAdapterClass;
+ (id)poolWithContext:;
@end
