@interface InGroupDelegateResponse_GroupData : IESLivePBBaseMessage
@property (nonatomic) q count;
@property (nonatomic) NSMutableArray groupUserArray;
@property (nonatomic) Q groupUserArray_Count;
+ (id)descriptor;
@end
