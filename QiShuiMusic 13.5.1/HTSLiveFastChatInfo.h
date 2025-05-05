@interface HTSLiveFastChatInfo : IESLivePBBaseMessage
@property (nonatomic) BOOL fastChatSwitch;
@property (nonatomic) NSString bubbleColor;
@property (nonatomic) NSMutableArray fastChatListArray;
@property (nonatomic) Q fastChatListArray_Count;
+ (id)descriptor;
@end
