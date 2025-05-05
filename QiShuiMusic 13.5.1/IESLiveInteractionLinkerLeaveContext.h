@interface IESLiveInteractionLinkerLeaveContext : NSObject
@property (nonatomic) IESLiveLinkmicLinkAudienceLeaveContext linkmicContext;
@property (nonatomic) NSInteger controlType;
@property (nonatomic) q paidCount;
@property (nonatomic) q linkDuration;
@property (nonatomic) IESLiveLinkMicAudienceLeaveResponse_UserInfoDuringLinkmic userinfoDuringLinkmic;
@property (nonatomic) NSObject rawData;
@property (nonatomic) NSString promptString;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithLinkmicLinkAudienceLeaveContext:;
- (id)linkmicContext;
- (long long)paidCount;
- (void)setLinkmicContext:;
- (id)userinfoDuringLinkmic;
- (void).cxx_destruct;
- (id)rawData;
- (int)controlType;
- (long long)linkDuration;
- (id)promptString;
@end
