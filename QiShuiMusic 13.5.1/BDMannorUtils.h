@interface BDMannorUtils : NSObject
+ (id)mannorVersionCode;
+ (id)parseRulesFromRaw:;
+ (void)sendMannorHMDMonitorWith:creativeID:scene:logExtra:errorCode:;
+ (void)sendMannorLogWith:tag:nodeName:nodeMethod:creativeID:componentType:logExtra:extraInfo:debugInfo:;
+ (void)sendMannorMonitorWith:creativeID:groupID:logExtra:adExtraData:;
+ (void)sendMannorTechMonitorWith:params:;
+ (void)sendTrackV3WithTrackConfig:areaKey:eventName:dynamicParams:;
+ (void)sendTrackWithTrackConfig:areaKey:eventName:dynamicParams:;
+ (void)trackURLs:label:creativeID:extraData:logExtra:;
@end
