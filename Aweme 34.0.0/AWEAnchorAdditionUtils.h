@interface AWEAnchorAdditionUtils : NSObject
+ (BOOL)hitOptimizeExperiment;
+ (void)trackItemShowWithModel:type:isSearchMode:index:extraParams:event:;
+ (void)trackIronManODRGuideShow:;
+ (void)trackPageShowWithType:isSearchMode:;
+ (id)anchorDetailRouterWithType:schema:anchorID:hasRecordBtn:;
+ (void)trackItemShowWithType:model:isSearchMode:;
+ (id)anchorAdditionCellIdentifierWithType:sectionType:;
+ (id)anchorAdditionCellIdentifierWithType:;
+ (void)trackClickWithType:model:isSearchMode:;
+ (Class)anchorAdditionCellWithType:sectionType:;
+ (Class)anchorAdditionCellWithType:;
+ (id)navigationBarTitleWithType:;
+ (id)searchPlaceholderTitleWithType:;
+ (void)enumerateAnchorAdditionCellWithType:usingBlock:;
+ (id)gameDetailRouterWithGameID:hasRecordBtn:;
@end
