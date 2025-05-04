@interface AWEGoodsDetailMonitorInfoManager : NSObject
@property (nonatomic) HMDThreadSafeDictionary originSessions;
@property (nonatomic) HMDThreadSafeDictionary originQueries;
@property (nonatomic) HMDThreadSafeDictionary extraInfo;
- (id)originSessions;
- (id)originQueries;
- (id)getOriginSessionInfoById:;
- (void)setOriginSessionWithId:infoMap:;
- (id)getOriginQueriesInfoById:;
- (void)setOriginQueriesWithId:infoMap:;
- (id)getExtraInfoById:;
- (void)updateExtraInfoWithId:infoMap:;
- (void)recycleParamsWithId:;
- (void)recycleAllParams;
- (void)setOriginSessions:;
- (void)setOriginQueries:;
- (id)init;
- (void).cxx_destruct;
- (id)extraInfo;
- (void)setExtraInfo:;
+ (id)sharedManager;
@end
