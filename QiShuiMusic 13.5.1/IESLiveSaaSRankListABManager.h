@interface IESLiveSaaSRankListABManager : NSObject
- (long long)audienceListStyle;
- (BOOL)disableShowIncome;
- (BOOL)enablePCUVary;
- (BOOL)enableRankNewRights;
- (BOOL)enableThreeUserSeqList;
- (BOOL)enableUserListCombine;
- (BOOL)enableUserListPositionAnim;
- (BOOL)enableWeeklyRankNewEnable;
- (BOOL)liveHourRankEntranceLynxEnable;
- (id)liveHourRankEntranceLynxSchema;
- (id)rankNewRightsData;
+ (id)managerWithDIContext:;
@end
