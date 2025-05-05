@interface PropMineResult_Data : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray propListsArray;
@property (nonatomic) Q propListsArray_Count;
+ (id)descriptor;
@end
