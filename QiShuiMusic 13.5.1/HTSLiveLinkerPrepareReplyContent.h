@interface HTSLiveLinkerPrepareReplyContent : IESLivePBBaseMessage
@property (nonatomic) NSString fromOpenId;
@property (nonatomic) q fromRoomId;
@property (nonatomic) NSString toOpenId;
@property (nonatomic) NSInteger replyType;
@property (nonatomic) NSString toast;
+ (id)descriptor;
@end
