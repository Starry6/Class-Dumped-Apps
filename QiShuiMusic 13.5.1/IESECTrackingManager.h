@interface IESECTrackingManager : NSObject
+ (id)createReportParamsWithBtm:host:;
+ (id)createJumpSourceBtmTokenWithBtm:host:bcm:;
+ (id)getBcmChainWithHost:chainLength:;
+ (id)getBcmChainWithStandardContentWithBtmModel:chainLength:;
+ (id)getBcmChainWithStandardContentWithHost:chainLength:;
+ (id)getPageIdFromBtm:;
+ (id)hybirdResponderForContainerID:;
+ (void)markResponderAsBtmPage:;
+ (BOOL)registerBtmPage:pageBtm:sourceBtmToken:;
+ (BOOL)registerBtmPage:params:;
+ (Class)serviceImpl;
+ (BOOL)setBcmPageParams:host:clearOldValue:;
+ (void)trackEvent:params:btm:host:;
+ (BOOL)updateBtmPage:sourceBtmToken:;
@end
