@interface AWEECOMIMTrackerServiceUtil : NSObject
+ (void)trackEvent:params:;
+ (id)getBTMPageInfo:;
+ (id)createJumpSourceBtmTokenWithBtm:host:bcm:;
+ (BOOL)registerBtmPage:pageBtm:sourceBtmToken:;
+ (id)createReportParamsWithBtm:host:;
+ (id)realEccsSchemeInfoWithEccsSchemeInfoString:;
+ (id)routerSchemeWithSourceBtmToken:scheme:;
+ (BOOL)setBcmPageParams:host:;
@end
