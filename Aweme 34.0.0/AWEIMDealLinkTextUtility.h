@interface AWEIMDealLinkTextUtility : NSObject
+ (void)dealWithTemplateModel:message:atView:;
+ (void)parseTextLinkAction:message:conversation:inView:;
+ (void)dealWithContext:;
+ (void)dealWithTemplateModel:message:atView:btmToken:;
+ (void)p_trackMateUnlockTopic:;
+ (BOOL)checkDebounce:;
+ (void)p_openLinkUsingWebpageModeWithLink:;
+ (void)p_trackUrlClickWithIsNativeLanding:urlUIType:;
+ (void)p_trackUrlClickWithIsNativeLanding:;
+ (void)pushWithLoadingViewControllerWithTemplateModel:context:;
+ (id)feedbackRequestParamsWithMessage:template:;
+ (id)reportExtraStringWithMessage:;
+ (id)p_replaceIncentiveChatSchema:withRelationID:;
+ (id)p_targetSchemaForWebpageModelWithLinkModel:context:;
+ (void)p_tryParseLinkAndGetRouteNativePageVCWithLinkModel:completed:;
+ (void)openLinkWithModel:;
+ (id)p_targetSchemaForLiveWithModel:isLive:roomId:anchorId:extraParams:;
+ (id)p_exchangeAvailableSchemaWithOriginalSchema:;
+ (void)p_transShortUrlToLongIfNeededWithUrl:completed:;
+ (void)dealWithCompanyTemplateModel:message:conversation:atView:;
@end
