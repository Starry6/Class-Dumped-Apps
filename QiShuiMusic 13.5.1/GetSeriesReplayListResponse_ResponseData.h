@interface GetSeriesReplayListResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray allReplayArray;
@property (nonatomic) Q allReplayArray_Count;
@property (nonatomic) NSString typeName;
@property (nonatomic) ReplayListExtra extra;
@property (nonatomic) BOOL hasExtra;
+ (id)descriptor;
@end
