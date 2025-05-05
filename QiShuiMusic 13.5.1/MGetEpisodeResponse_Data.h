@interface MGetEpisodeResponse_Data : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray episodesArray;
@property (nonatomic) Q episodesArray_Count;
+ (id)descriptor;
@end
