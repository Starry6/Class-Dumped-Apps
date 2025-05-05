@interface GetMoreReplayListResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) NSString typeName;
@property (nonatomic) NSMutableArray infoListArray;
@property (nonatomic) Q infoListArray_Count;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) q cursor;
@property (nonatomic) ReplayListExtra extra;
@property (nonatomic) BOOL hasExtra;
+ (id)descriptor;
@end
