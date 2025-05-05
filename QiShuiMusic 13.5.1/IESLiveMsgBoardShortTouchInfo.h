@interface IESLiveMsgBoardShortTouchInfo : IESLivePBBaseMessage
@property (nonatomic) q msgCount;
@property (nonatomic) NSMutableArray senderInfoListArray;
@property (nonatomic) Q senderInfoListArray_Count;
+ (id)descriptor;
@end
