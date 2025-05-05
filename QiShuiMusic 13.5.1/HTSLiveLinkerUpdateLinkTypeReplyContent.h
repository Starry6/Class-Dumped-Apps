@interface HTSLiveLinkerUpdateLinkTypeReplyContent : IESLivePBBaseMessage
@property (nonatomic) NSString fromOpenId;
@property (nonatomic) NSString toOpenId;
@property (nonatomic) NSInteger replyType;
@property (nonatomic) NSString replyPrompts;
+ (id)descriptor;
@end
