@interface IESLivePKGuestTrackHandler : NSObject
@property (nonatomic) IESLivePKGuestTrackerContext context;
- (id)initWithDIContext:;
- (void)trackAudienceOnGuestConnectionOver;
- (void)trackAudienceWithPKEnd;
- (void)trackAudienceWithPunishEnd;
- (void)trackWithEvent:extra:;
- (void)trackWithInteractionEvent:extra:;
- (id)context;
- (void).cxx_destruct;
- (void)setContext:;
@end
