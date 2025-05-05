@interface HTSLiveGiftStruct_GiftMsgBoard : IESLivePBBaseMessage
@property (nonatomic) BOOL forMsgBoard;
@property (nonatomic) NSString promptText;
+ (id)descriptor;
@end
