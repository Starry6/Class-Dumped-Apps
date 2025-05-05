@interface HTSLiveLinkerLockPositionContent : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray lockedPositionsArray;
@property (nonatomic) Q lockedPositionsArray_Count;
+ (id)descriptor;
@end
