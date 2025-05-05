@interface IESLiveLinkmicLinkAudienceReplyJoinChannelContext : IESLiveLinkmicLinkAudienceReplyContext
@property (nonatomic) BOOL alreadyJoinChannel;
@property (nonatomic) <IESLiveLinkmicJoinChannelContext> joinChannelContext;
@property (nonatomic) NSInteger replyType;
@property (nonatomic) Q vendor;
@property (nonatomic) NSNumber channelID;
@property (nonatomic) NSString linkmicID;
@property (nonatomic) NSString promptString;
@property (nonatomic) NSString linkerSessionId;
@property (nonatomic) NSString remoteLinkerSessionId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL hasGeustLinkmicInfo;
@property (nonatomic) NSString rtcExtInfo;
- (BOOL)alreadyJoinChannel;
- (id)initWithReplyResponse:;
- (id)joinChannelContext;
- (void).cxx_destruct;
@end
