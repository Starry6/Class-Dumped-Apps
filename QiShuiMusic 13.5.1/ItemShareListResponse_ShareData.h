@interface ItemShareListResponse_ShareData : IESLivePBBaseMessage
@property (nonatomic) NSString itemType;
@property (nonatomic) NSMutableArray itemListArray;
@property (nonatomic) Q itemListArray_Count;
+ (id)descriptor;
@end
