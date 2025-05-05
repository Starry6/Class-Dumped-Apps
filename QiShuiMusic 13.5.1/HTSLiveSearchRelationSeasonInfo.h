@interface HTSLiveSearchRelationSeasonInfo : IESLivePBBaseMessage
@property (nonatomic) NSInteger seasonUpdateStatus;
@property (nonatomic) q seasonId;
@property (nonatomic) GPBInt64Array episodeIdsArray;
@property (nonatomic) Q episodeIdsArray_Count;
+ (id)descriptor;
@end
