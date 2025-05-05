@interface HTSLiveClubInfo : IESLivePBBaseMessage
@property (nonatomic) NSString name;
@property (nonatomic) q activeFansCount;
@property (nonatomic) q totalFansCount;
@property (nonatomic) q todayNewFansCount;
@property (nonatomic) q hotRank;
@property (nonatomic) NSMutableArray taskStatsArray;
@property (nonatomic) Q taskStatsArray_Count;
+ (id)descriptor;
@end
