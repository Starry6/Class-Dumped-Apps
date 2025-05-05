@interface IESLiveInteractionLinkSessionBussinessContext : NSObject
@property (nonatomic) NSString enterFrom;
@property (nonatomic) Q inviteSource;
@property (nonatomic) BOOL hasAppliedBefore;
@property (nonatomic) BOOL joinChannelAfterFollow;
@property (nonatomic) NSString clickSource;
- (void)setClickSource:;
- (id)clickSource;
- (id)enterFrom;
- (BOOL)hasAppliedBefore;
- (unsigned long long)inviteSource;
- (BOOL)joinChannelAfterFollow;
- (void)setEnterFrom:;
- (void)setHasAppliedBefore:;
- (void)setInviteSource:;
- (void)setJoinChannelAfterFollow:;
- (void).cxx_destruct;
@end
