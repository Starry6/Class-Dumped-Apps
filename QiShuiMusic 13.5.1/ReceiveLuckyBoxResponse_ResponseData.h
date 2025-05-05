@interface ReceiveLuckyBoxResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray receiveInfoArray;
@property (nonatomic) Q receiveInfoArray_Count;
+ (id)descriptor;
@end
