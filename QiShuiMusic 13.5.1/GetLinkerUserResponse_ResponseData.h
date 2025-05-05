@interface GetLinkerUserResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray userListArray;
@property (nonatomic) Q userListArray_Count;
@property (nonatomic) q linkerId;
+ (id)descriptor;
@end
