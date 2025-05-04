@interface AWEFeedTTRelatedReadingTools : NSObject
+ (BOOL)showFeedBottomArticleBarSuperiorToHotSearch:otherParams:;
+ (BOOL)showFeedBottomArticleBarInferiorToHotSearch:otherParams:;
+ (BOOL)isToutiaoInstalled;
+ (BOOL)isToutiaoLiteInstalled;
+ (id)currentAppName;
+ (id)reconstructOpenUrlString:withExtraParams:;
+ (id)appendExtraParams:toUrlString:;
+ (long long)sceneForReferString:;
+ (id)realDiversionTypeWithModel:didOpenApp:;
+ (id)isToutiaoInstalledString;
+ (long long)diversionChoiceType;
+ (id)diversionTypeWithModel:;
+ (long long)currentRelatedReadingSchemeType:;
+ (id)extractParamsFromStartPage:key:;
+ (id)extractParamsFromUrl:key:;
+ (void)preloadSchemaIfNeeded:scene:model:;
+ (BOOL)currentSceneIsEnabledDisplayToutiaoBar:;
+ (void)updateDiversionChoiceType:;
+ (BOOL)preloadSchemaEnable:;
+ (id)extractLogDataWithModel:;
+ (BOOL)sceneIsAvailable:;
@end
