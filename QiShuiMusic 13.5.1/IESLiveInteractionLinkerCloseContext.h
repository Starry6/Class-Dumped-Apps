@interface IESLiveInteractionLinkerCloseContext : NSObject
@property (nonatomic) IESLiveLinkmicLinkAudienceCloseContext linkmicContext;
@property (nonatomic) IESLiveBanUser banAnchorInfo;
@property (nonatomic) q reason;
@property (nonatomic) NSObject rawData;
@property (nonatomic) NSString promptString;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)banAnchorInfo;
- (id)initWithCloseReason:;
- (id)initWithLinkmicLinkAudienceCloseContext:closeReason:;
- (id)linkmicContext;
- (void)setLinkmicContext:;
- (long long)reason;
- (void).cxx_destruct;
- (id)rawData;
- (id)promptString;
@end
