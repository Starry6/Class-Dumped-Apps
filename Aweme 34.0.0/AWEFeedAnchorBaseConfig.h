@interface AWEFeedAnchorBaseConfig : NSObject
@property (nonatomic) NSMutableDictionary extra;
@property (nonatomic) <AWEAwemePlayInteractionPresenterMethodDelegate><AWEAwemePlayInteractionPanelDelegate><AWEAwemePlayInteractionCommerceDelegate><AWEAwemePlayInteractionUIDisplayDelegate><AWEAwemePlayInteractionUpdateDelegate><AWEPlayInteractionViewControllerProtocol> interactionViewController;
@property (nonatomic) AWEPageContext interactionContext;
@property (nonatomic) NSString referString;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) NSDictionary extraInfo;
@property (nonatomic) @? anchorViewDidDisappearBlock;
@property (nonatomic) q sceneType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)referString;
- (void)setExtra:;
- (void)setReferString:;
- (void)setInteractionViewController:;
- (void)anchorViewWillShowOnSuperview;
- (void)updateWithAwemeModel:needPerformOnDisplay:;
- (BOOL)useNewStyle;
- (id)anchorViewType;
- (id)anchorViewWithModel:;
- (id)layoutWithAwemeModel:commonLayoutInfo:;
- (BOOL)configAnchorExtraInfoWithKey:value:;
- (void)removeAnchorExtraInfoWithKey:;
- (id)anchorViewDidDisappearBlock;
- (void)setAnchorViewDidDisappearBlock:;
- (void)setModel:;
- (id)extra;
- (id)model;
- (void).cxx_destruct;
- (void)reset;
- (long long)sceneType;
- (void)setSceneType:;
- (id)extraInfo;
- (id)interactionContext;
- (void)setInteractionContext:;
- (id)interactionViewController;
+ (BOOL)hasAnchorViewDataWithAwemeModelForFeed:extraInfo:;
+ (BOOL)hasAnchorViewDataWithAwemeModelForCommentList:extraInfo:;
+ (BOOL)hasAnchorViewDataWithAwemeModelForBulletScreen:extraInfo:;
+ (id)anchorType;
@end
