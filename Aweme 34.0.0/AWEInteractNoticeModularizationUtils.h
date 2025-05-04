@interface AWEInteractNoticeModularizationUtils : NSObject
+ (id)cellSchemaWithGeneralModel:;
+ (id)getCollectsIDFromSchema:;
+ (id)coverSchemaWithGeneralModel:;
+ (id)getNewInteractCellStyleSupplementAttStrWithTime:withSupplement:;
+ (id)getNewInteractCellStyleDeleteAttStrWithStr:;
+ (id)getNewInteractCellStyleRichAttStrWithStr:formatModel:;
+ (id)getNewInteractCellDisplayStrWithModel:withContentWidth:;
+ (id)avatarSchemaWithGeneralModel:;
+ (id)hexStringFromString:;
+ (void)checktodayInThePastNoticeWithNoticeID:;
+ (void)prepareModularizationNotices:isRefresh:;
+ (void)preprocessModularizationNotice:;
+ (void)removeOverduedTodayInThePastNotices:isRefresh:;
+ (void)removeOverdueTodayInThePastNotices:;
+ (id)appenedQueryParamsUrlWithString:model:;
+ (void)removePostTodayInThePastNotice:;
@end
