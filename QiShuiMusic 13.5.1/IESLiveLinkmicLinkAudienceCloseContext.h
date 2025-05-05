@interface IESLiveLinkmicLinkAudienceCloseContext : IESLiveLinkmicLinkContext
@property (nonatomic) IESLiveLinkMicAudienceFinishResponse finishResponse;
@property (nonatomic) HTSLiveLinkMicMethod message;
@property (nonatomic) NSString banAnchorUserId;
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
- (id)banAnchorUserId;
- (id)finishResponse;
- (id)initWithFinishResponse:;
- (id)initWithLinkMicMethodMessage:;
- (void)setFinishResponse:;
- (void)setMessage:;
- (id)message;
- (void).cxx_destruct;
- (id)rawData;
- (id)extraData;
@end
