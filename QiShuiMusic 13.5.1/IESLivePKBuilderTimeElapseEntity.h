@interface IESLivePKBuilderTimeElapseEntity : NSObject
@property (nonatomic) double inviteTimeInterval;
@property (nonatomic) double receiveInviteTimeInterval;
@property (nonatomic) double replyTimeInterval;
@property (nonatomic) double receiveReplyTimeInterval;
@property (nonatomic) double serverJoinChannelTimeInterval;
- (double)inviteTimeInterval;
- (double)receiveInviteTimeInterval;
- (double)receiveReplyTimeInterval;
- (double)replyTimeInterval;
- (double)serverJoinChannelTimeInterval;
- (void)setInviteTimeInterval:;
- (void)setReceiveInviteTimeInterval:;
- (void)setReceiveReplyTimeInterval:;
- (void)setReplyTimeInterval:;
- (void)setServerJoinChannelTimeInterval:;
@end
