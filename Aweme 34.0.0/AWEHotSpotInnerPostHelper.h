@interface AWEHotSpotInnerPostHelper : NSObject
+ (void)bottomShootingWithAweme:hotSearchModel:needProps:logExtra:;
+ (void)transferToShootingWithAweme:hotSearchModel:needProps:logExtra:clickFrom:;
+ (BOOL)isTemplateAweme:;
+ (BOOL)isTemplateHotSearch:;
+ (BOOL)shouldEnterTemplateWithAweme:hotSearchModel:;
+ (void)transferToTemplateMvWithAweme:hotSearchModel:logExtra:clickFrom:;
+ (void)transferToShootingPageWithAweme:hotSearchModel:needProps:logExtra:clickFrom:;
+ (id)cameraStickerWithAweme:hotSearchModel:clickFrom:;
+ (id)composerBizDataWithAweme:hotSearchModel:logExtra:clickFrom:;
+ (id)publishComposerWithAweme:hotSearchModel:clickFrom:;
+ (id)templateDataConfigWithAweme:hotSearchModel:;
+ (id)postVideoParamsWithLogExtra:;
+ (id)cameraMusicWithAweme:hotSearchModel:clickFrom:;
+ (id)cameraEffectWithAweme:hotSearchModel:clickFrom:;
+ (id)bizDataActivityWithAweme:hotSearchModel:logExtra:clickFrom:;
+ (id)effectIDWithAweme:hotSearchModel:clickFrom:;
+ (id)publishHotspotWithAweme:hotSearchModel:clickFrom:;
+ (id)publishChallengeWithAweme:hotSearchModel:clickFrom:;
+ (id)challengeIdListWithAweme:hotSearchModel:clickFrom:;
+ (id)p_aiStickerId:;
+ (BOOL)p_isAigc:;
+ (BOOL)p_isAiDance:;
+ (void)p_startTaskWithParams:;
+ (void)panelTableShootingWithHotSearchModel:logExtra:;
@end
