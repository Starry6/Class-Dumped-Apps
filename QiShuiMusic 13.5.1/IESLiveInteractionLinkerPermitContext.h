@interface IESLiveInteractionLinkerPermitContext : NSObject
@property (nonatomic) IESLiveLinkmicLinkAudiencePermitContext linkmicContext;
@property (nonatomic) NSInteger linkType;
@property (nonatomic) NSObject rawData;
@property (nonatomic) NSString promptString;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithLinkmicLinkAudiencePermitContext:;
- (id)linkmicContext;
- (void)setLinkmicContext:;
- (void).cxx_destruct;
- (id)rawData;
- (int)linkType;
- (id)promptString;
@end
