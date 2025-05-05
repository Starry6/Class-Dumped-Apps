@interface AWEIMDealLinkTextUtility : NSObject
+ (void)dealWithCompanyTemplateModel:message:atView:;
+ (void)dealWithTemplateModel:message:atView:;
+ (id)feedbackRequestParamsWithMessage:template:;
+ (void)openLinkWithModel:;
+ (id)reportExtraStringWithMessage:;
@end
