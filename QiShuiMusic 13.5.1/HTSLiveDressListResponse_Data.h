@interface HTSLiveDressListResponse_Data : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray dressListArray;
@property (nonatomic) Q dressListArray_Count;
@property (nonatomic) NSString version;
+ (id)descriptor;
@end
