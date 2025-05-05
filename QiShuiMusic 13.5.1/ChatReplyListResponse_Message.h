@interface ChatReplyListResponse_Message : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSString methodName;
@property (nonatomic) q msgId;
@property (nonatomic) HTSLiveUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) HTSLiveText replyContent;
@property (nonatomic) BOOL hasReplyContent;
@property (nonatomic) q likeStatus;
+ (id)descriptor;
@end
