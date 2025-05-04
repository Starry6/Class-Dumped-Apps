@interface AWEFeedVideoPOICommentAnchorV2Manager : NSObject
@property (nonatomic) AWEFeedVideoLocalLifeAnchorV2ViewContext viewContext;
@property (nonatomic) BOOL userNeverVisitPoiAnchor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)anchorViewWillShowOnSuperview;
- (void)handlerTemplateAnchorViewClicked;
- (id)trackerParamsForTemplateAnchorClick;
- (id)trackerParamsForTemplateAnchorShow;
- (void)updateViewContext:;
- (id)aweNearbyModuleService;
- (void)setUserNeverVisitPoiAnchor:;
- (void)handleWillShowOnSuperViewWithContext;
- (void)handleClickWithContext;
- (void)trackWillShowOnSuperViewWithContext:;
- (void)trackTradeAdEventWithLabelName:aweme:;
- (void)trackClickWithContext:;
- (void)handlePOIClickWithContext:referString:enterMethod:logExtra:;
- (void)handlePOIListClickWithContext:referString:enterMethod:logExtra:;
- (void)handlePOITradeClickWithContext:;
- (id)trackParamsForPOIAnchorEntranceWithModel:referString:;
- (BOOL)userNeverVisitPoiAnchor;
- (id)tradeParamsWithContext:;
- (id)viewContext;
- (void)setViewContext:;
- (void).cxx_destruct;
@end
