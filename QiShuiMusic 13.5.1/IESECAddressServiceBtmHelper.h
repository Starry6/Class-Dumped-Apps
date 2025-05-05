@interface IESECAddressServiceBtmHelper : NSObject
+ (id)convertBCMChainToBTMList:;
+ (id)findBtmBeforeAddressSelectPage;
+ (BOOL)findInNextBtmList:matchBtm:;
+ (id)getAddressResultWithCurrentBTM:btmSourceToken:config:;
+ (id)getAddressResultWithHost:config:;
+ (id)getCurrentBTM;
+ (id)getCurrentSceneWithBTMList:config:;
+ (id)getLastSceneWithBTMList:config:chainLength:needSkipLastNode:;
+ (BOOL)isSameBtm:anotherBtm:;
@end
