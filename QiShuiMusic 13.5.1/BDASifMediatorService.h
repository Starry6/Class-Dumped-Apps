@interface BDASifMediatorService : NSObject
+ (void)trackAdEvent:tag:extra:adExtra:;
+ (id)appProjName;
+ (id)connectMethodName;
+ (id)idfa;
+ (void)monitorService:value:category:extra:;
+ (void)performanceEvent:params:;
+ (id)requestForJSONWithResponse:params:method:needCommonParams:headerField:callback:;
+ (void)trackAlog:;
+ (void)trackTeaAndSlardarEvent:value:category:extra:;
+ (void)trackURLs:label:cid:extraData:logExtra:;
+ (id)versionName;
+ (id)deviceType;
+ (id)userID;
+ (id)sharedInstance;
+ (id)installID;
+ (id)appName;
+ (id)deviceID;
+ (id)appID;
+ (id)sdkVersion;
@end
