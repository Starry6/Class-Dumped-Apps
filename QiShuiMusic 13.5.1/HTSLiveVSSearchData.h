@interface HTSLiveVSSearchData : IESLivePBBaseMessage
@property (nonatomic) HTSLiveEpisode generalInfo;
@property (nonatomic) BOOL hasGeneralInfo;
@property (nonatomic) NSMutableArray albumListArray;
@property (nonatomic) Q albumListArray_Count;
@property (nonatomic) NSMutableArray relationListArray;
@property (nonatomic) Q relationListArray_Count;
@property (nonatomic) q latestPeriod;
@property (nonatomic) q albumCount;
+ (id)descriptor;
@end
