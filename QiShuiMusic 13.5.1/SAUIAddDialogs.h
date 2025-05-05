@interface SAUIAddDialogs : SABaseClientBoundCommand
@property (nonatomic) NSArray dialogs;
@property (nonatomic) NSNumber listenAfterSpeaking;
@property (nonatomic) SAUIListenAfterSpeakingBehavior listenAfterSpeakingBehavior;
@property (nonatomic) NSString responseMode;
- (void)af_addEntriesToAnalyticsContext:;
- (id)af_dialogIdentifiersForAnalyticsContext;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)listenAfterSpeaking;
- (id)dialogs;
- (id)responseMode;
- (void)setResponseMode:;
- (void)setListenAfterSpeaking:;
- (id)listenAfterSpeakingBehavior;
- (void)setListenAfterSpeakingBehavior:;
- (void)setDialogs:;
@end
