@interface AWEFeedAnchorPOITradeConfig : AWEFeedAnchorBaseConfig
@property (nonatomic) UIView<AWEFeedAnchorViewBehaviorProtocol><AWEMultiAnchorExtendViewProtocol> poiTradeEntryView;
@property (nonatomic) NSString creationId;
@property (nonatomic) BOOL anchorInitializeMark;
@property (nonatomic) NSString POIIDInLogExtra;
@property (nonatomic) <AWEPOITradeEntryAnchorViewManagerProtocol> anchorManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <AWEAwemePlayInteractionPresenterMethodDelegate><AWEAwemePlayInteractionPanelDelegate><AWEAwemePlayInteractionCommerceDelegate><AWEAwemePlayInteractionUIDisplayDelegate><AWEAwemePlayInteractionUpdateDelegate><AWEPlayInteractionViewControllerProtocol> interactionViewController;
@property (nonatomic) AWEPageContext interactionContext;
@property (nonatomic) NSString referString;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) NSDictionary extraInfo;
@property (nonatomic) @? anchorViewDidDisappearBlock;
@property (nonatomic) q sceneType;
- (void)anchorViewWillShowOnSuperview;
- (id)creationId;
- (void)setCreationId:;
- (void)updateWithAwemeModel:needPerformOnDisplay:;
- (id)anchorViewWithModel:;
- (id)layoutWithAwemeModel:commonLayoutInfo:;
- (id)POIIDInLogExtra;
- (void)setPOIIDInLogExtra:;
- (id)anchorManager;
- (void)setAnchorManager:;
- (void)showAnchorDetail;
- (BOOL)anchorInitializeMark;
- (void)setAnchorInitializeMark:;
- (id)poiTradeEntryView;
- (id)createTradeAnchorManagerContext;
- (BOOL)shouldShowTradeDetail;
- (void)onTradeLabelClicked:;
- (void)setPoiTradeEntryView:;
- (void).cxx_destruct;
- (void)reset;
+ (BOOL)hasAnchorViewDataWithAwemeModelForFeed:extraInfo:;
+ (BOOL)hasAnchorViewDataWithAwemeModelForCommentList:extraInfo:;
+ (BOOL)hasAnchorViewDataWithAwemeModelForBulletScreen:extraInfo:;
+ (BOOL)hasMutableAnchorViewDataWithAwemeModelForFeed:extraInfo:anchorInfo:;
+ (void)onMutableAnchorSheetShowWithAweme:context:count:;
+ (void)onMutableAnchorSheetClickWithAweme:context:count:;
+ (id)anchorType;
@end
