@interface HTSLiveSearchInfo : IESLivePBBaseMessage
@property (nonatomic) NSString seasonAssistInfo;
@property (nonatomic) NSString searchBackgroundColor;
@property (nonatomic) GPBInt64Array albumListEpisodeIdsArray;
@property (nonatomic) Q albumListEpisodeIdsArray_Count;
@property (nonatomic) NSMutableArray relationSeasonInfoArray;
@property (nonatomic) Q relationSeasonInfoArray_Count;
@property (nonatomic) q albumListShowTitle;
@property (nonatomic) NSString actorsInfo;
+ (id)descriptor;
@end
