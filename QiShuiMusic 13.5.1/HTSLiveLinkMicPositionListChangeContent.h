@interface HTSLiveLinkMicPositionListChangeContent : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray positionsArray;
@property (nonatomic) Q positionsArray_Count;
+ (id)descriptor;
@end
