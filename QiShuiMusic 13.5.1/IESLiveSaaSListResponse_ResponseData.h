@interface IESLiveSaaSListResponse_ResponseData : GPBMessage
@property (nonatomic) NSMutableArray userArray;
@property (nonatomic) Q userArray_Count;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) q totalCount;
@property (nonatomic) NSMutableArray lockedPositionsArray;
@property (nonatomic) Q lockedPositionsArray_Count;
@property (nonatomic) NSString nextCursor;
+ (id)descriptor;
@end
