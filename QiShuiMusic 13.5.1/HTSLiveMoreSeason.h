@interface HTSLiveMoreSeason : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray episodesArray;
@property (nonatomic) Q episodesArray_Count;
@property (nonatomic) NSString moreSeasonTitle;
+ (id)descriptor;
@end
