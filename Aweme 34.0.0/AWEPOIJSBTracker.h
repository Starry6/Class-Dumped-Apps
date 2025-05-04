@interface AWEPOIJSBTracker : NSObject
+ (id)getLocalLifeTrackParamForBcmChain;
+ (id)getBTMPageInfo:;
+ (id)createJumpSourceBtmTokenWithBtm:host:bcm:;
+ (void)setBcmPageParams:host:clearOldValue:;
+ (id)getBcmChainWithHost:chainLength:isDomainStandard:;
+ (BOOL)registerBtmPage:pageBtm:sourceBtmToken:bcm:;
+ (id)getVirtualSourceTokenWithBtm:host:bcm:btmStandData:;
+ (id)createJumpSourceBtmTokenWithBtm:host:bcm:btmStandData:;
+ (id)getValidBTMResponder:;
+ (void)trackEvent:params:btmInfo:bridgeModel:;
@end
