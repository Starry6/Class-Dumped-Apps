@interface IESLiveRankListABManager : NSObject
+ (long long)audienceListStyle;
+ (BOOL)disableRankInfosWithoutShop;
+ (BOOL)enableRankNewRights;
+ (BOOL)enableThreeUserSeqList;
+ (BOOL)enableUserListCombine;
+ (BOOL)enableVerticalEntrance;
+ (long long)liveDisableDouplusLargeNum;
+ (BOOL)liveEnableLynxGuestRankList;
+ (long long)liveFetchRankListInfoDelayTime;
+ (id)liveGuestContributeListUrl;
+ (id)liveHourRankClientExperiment;
+ (BOOL)liveHourRankEntranceAnnieXCard;
+ (long long)liveHourRankEntranceCardType;
+ (BOOL)liveHourRankEntranceLynxEnable;
+ (id)liveHourRankEntranceLynxSchema;
+ (BOOL)liveHourRankEntranceReuse;
+ (id)liveRankListLynxConfig;
+ (long long)rankEntranceStyle;
+ (id)rankNewRightsData;
@end
