@interface AWEGrouponPageContext : NSObject
@property (nonatomic) q grouponFeedbackLongPressActionKey;
@property (nonatomic) AWEGrouponFeedPluginManager pluginManager;
@property (nonatomic) <AWEGrouponContentCRUDAbility> contentCRUDAbility;
@property (nonatomic) q pageType;
@property (nonatomic) AWEGrouponPageUIConfig uiConfig;
@property (nonatomic) AWEGrouponPageDataConfig dataConfig;
@property (nonatomic) AWEGrouponPageScrollConfig scrollConfig;
@property (nonatomic) AWEGrouponSegmentHeaderConfig headerConfig;
@property (nonatomic) UIViewController containerVC;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) AWEGrouponC2ContainerCollectionViewLayout containerLayout;
@property (nonatomic) AWEGrouponC2ContainerStore store;
@property (nonatomic) AWEGrouponShowHalfScreenShowStatus halfScreenShowStatus;
@property (nonatomic) AWENearbyC2FeedContext feedContext;
@property (nonatomic) <AWEXTabBaseChannelControllerProtocol> xtabChannelAblity;
@property (nonatomic) <AWENearbyThemeStyleProtocol> themeAblity;
@property (nonatomic) <AWEGrouponC2ContainerCollectionViewAbility> collectionViewAblity;
@property (nonatomic) AWEGrouponFeedbackConfig feedConfig;
@property (nonatomic) BOOL skipInvalidCardAppearEvent;
@property (nonatomic) BOOL containerIsInWindow;
@property (nonatomic) BOOL skipInvalidCardAppearEventEnable;
- (id)scrollConfig;
- (void)setScrollConfig:;
- (void)setContainerVC:;
- (id)headerConfig;
- (void)setHeaderConfig:;
- (id)uiConfig;
- (id)dataConfig;
- (void)setPluginManager:;
- (void)setDataConfig:;
- (id)containerVC;
- (void)setUiConfig:;
- (id)initWithPageType:;
- (void)setFeedContext:;
- (id)feedContext;
- (id)feedConfig;
- (void)tryHideFeedbackViewOnFeedComponent:;
- (long long)grouponFeedbackLongPressActionKey;
- (void)showFeedbackViewOnFeedComponent:longPressGestureRecognizer:;
- (void)deleteCards:;
- (void)deleteCardWithMode:idList:;
- (void)setCollectionViewAblity:;
- (void)setContentCRUDAbility:;
- (void)setContainerLayout:;
- (id)collectionViewAblity;
- (void)setFeedConfig:;
- (void)setHalfScreenShowStatus:;
- (void)setXtabChannelAblity:;
- (void)setThemeAblity:;
- (id)contentCRUDAbility;
- (BOOL)skipInvalidCardAppearEventEnable;
- (BOOL)containerIsInWindow;
- (BOOL)skipInvalidCardAppearEvent;
- (id)halfScreenShowStatus;
- (id)xtabChannelAblity;
- (id)themeAblity;
- (id)collectionView;
- (id)store;
- (void)setCollectionView:;
- (void)setPageType:;
- (void)setStore:;
- (void).cxx_destruct;
- (long long)pageType;
- (id)pluginManager;
- (id)containerLayout;
- (void)hideFeedbackView;
@end
