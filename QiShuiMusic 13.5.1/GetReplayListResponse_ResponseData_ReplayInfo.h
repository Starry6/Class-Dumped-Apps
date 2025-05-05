@interface GetReplayListResponse_ResponseData_ReplayInfo : IESLivePBBaseMessage
@property (nonatomic) NSString typeName;
@property (nonatomic) NSMutableArray infoListArray;
@property (nonatomic) Q infoListArray_Count;
@property (nonatomic) ReplayListExtra extra;
@property (nonatomic) BOOL hasExtra;
+ (id)descriptor;
@end
