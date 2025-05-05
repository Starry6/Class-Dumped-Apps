@interface HTSLiveRoomIMInfo : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray welcomeMessagesArray;
@property (nonatomic) Q welcomeMessagesArray_Count;
@property (nonatomic) NSString roomTag;
@property (nonatomic) NSString hideGiftMessage;
+ (id)descriptor;
@end
