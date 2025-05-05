@interface IESLiveInteractionLinkerReplyParams : IESLiveInteractionLinkerParams
@property (nonatomic) Q replyType;
@property (nonatomic) q linkType;
@property (nonatomic) NSString replyToUserSecID;
@property (nonatomic) Q inviteSource;
- (unsigned long long)inviteSource;
- (id)replyToUserSecID;
- (void)setInviteSource:;
- (void)setReplyToUserSecID:;
- (void)setLinkType:;
- (void).cxx_destruct;
- (long long)linkType;
- (unsigned long long)replyType;
- (void)setReplyType:;
@end
