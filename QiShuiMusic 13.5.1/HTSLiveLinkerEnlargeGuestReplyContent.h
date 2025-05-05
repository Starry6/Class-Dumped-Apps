@interface HTSLiveLinkerEnlargeGuestReplyContent : IESLivePBBaseMessage
@property (nonatomic) NSString fromOpenid;
@property (nonatomic) NSString toOpenid;
@property (nonatomic) NSInteger replyType;
@property (nonatomic) NSString replyPrompts;
+ (id)descriptor;
@end
