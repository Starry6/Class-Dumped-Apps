@interface AWESearchClickRecomUtility : NSObject
+ (BOOL)unifyConfigEnable:;
+ (id)fetchGeneralSearchModelWithComponent:;
+ (id)getFromGroupId:awemeModel:displayItems:;
+ (BOOL)isGeneralSearchWaterfallLayoutWithModel:;
+ (double)searchRecomWordShowDelayTime;
+ (BOOL)shouldShowWaterfallClickRecomCard:hasClicked:docType:;
+ (id)getBussinessId:awemeModel:;
+ (id)getSearchModelWithIndex:items:;
+ (long long)getInsertIdxWithModel:currentIdx:displayItems:;
+ (BOOL)isFusionCard:;
+ (void)beginTrigger;
+ (BOOL)enableRegisterPlayCallbackV1:;
+ (BOOL)enableWaterfallClickRecom;
+ (BOOL)isCardConsumTimeValidWithDocType:;
+ (long long)waterfallCommonCardShowDelay;
+ (id)waterfallCustomCardDocTypeList;
+ (long long)waterfallCustomCardShowDelay;
+ (id)getFusionCardItemID:awemeModel:displayItems:;
+ (BOOL)isSingleCardAtNewGeneralLayoutWithModel:;
+ (id)createWaterfallRecomViewWithType:delegate:;
+ (long long)waterfallCustomCardImageStyle;
+ (id)config;
@end
