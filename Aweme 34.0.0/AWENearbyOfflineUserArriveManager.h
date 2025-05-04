@interface AWENearbyOfflineUserArriveManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)firstArriveInfo:firstArriveTS:;
+ (void)trackInsertResultWithErrorMsg:msg:;
+ (void)updataFirstArriveInfoWitLogId:poiID:expirationTime:;
+ (void)removeAllFirstArriveInfo;
+ (void)removeCacheUserArriveInfo;
+ (id)getFirstArriveTSWithLogID:;
+ (long long)arriveTimesFromFirstArrive;
+ (id)getFirstArriveInfoArray;
+ (id)checkTheSamePoiID:;
+ (id)updataUserArriveParamWithPoiId:firstArriveTS:naturalDayFirstTS:expirationTS:arriveTimes:;
+ (BOOL)checkNaturalDayFirstTSValid:;
+ (long long)upDataExpirationTSWithDic:expirationTS:;
+ (void)cacheUserArriveInfoWithDic:;
+ (void)removeFirstArriveWithLogID:;
+ (id)getLogIDFromMsg:;
+ (id)firstArriveParamsWithTS:logID:;
+ (void)cacheFirstArriveInfoWithParams:;
+ (id)getUserArriveInfoDic;
+ (void)appendOfflineCardParamToDcard:logID:expirationTime:;
@end
