@interface AWEFeedMixVideoModuleService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)mixVideoMoreView;
- (id)aweMixPanelDetailTableViewContainerControllerWithDataController:initialIndex:referString:logExtraDict:;
- (id)aweMixPanelDetailTableViewControllerWithModel:referString:logExtraDict:;
- (id)aweMixVideoSelectChaptersControllerWithData:index:referString:logExtraDict:selectMixVideoBlock:;
- (id)aweMixPanelDetailTableViewContainerControllerWithModel:referString:logExtraDict:;
- (void)recordRichAwemeCurrentIndex:WithItemID:;
- (id)getMixRichAwemeIndexWithItemID:;
- (id)getMixRichAwemeIndexDict;
- (void)removeMixRichAwemeIndexWithItemID:;
- (void)handleRichAwemeForMixWithContext:;
- (id)aweMixVideoSelectChaptersControllerWithAwemeModel:referString:logExtraDict:selectMixVideoBlock:;
- (Class)aweMixVideoSelectChaptersClass;
- (Class)compilationRecommendManagerClass;
- (id)aweMixPanelDetailTableViewControllerWithDataController:initialIndex:referString:logExtraDict:;
+ (BOOL)mixPanelShowed;
@end
