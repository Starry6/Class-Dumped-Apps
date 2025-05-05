@interface IESLiveInteractionLinkerKickoutContext : NSObject
@property (nonatomic) IESLiveLinkmicLinkAudienceKickoutContext linkmicContext;
@property (nonatomic) q paidCount;
@property (nonatomic) q linkDuration;
@property (nonatomic) NSInteger controlType;
@property (nonatomic) NSInteger kickOutSource;
@property (nonatomic) BOOL isSysKickOut;
@property (nonatomic) NSObject rawData;
@property (nonatomic) NSString promptString;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithLinkmicLinkAudienceKickoutContext:;
- (BOOL)isSysKickOut;
- (int)kickOutSource;
- (id)linkmicContext;
- (long long)paidCount;
- (void)setLinkmicContext:;
- (void).cxx_destruct;
- (id)rawData;
- (int)controlType;
- (long long)linkDuration;
- (id)promptString;
@end
