@interface SAUIGetResponseAlternativesPlayback : SABaseClientBoundCommand
@property (nonatomic) SAUIGetResponseAlternatives playbackCommand;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)playbackCommand;
- (void)setPlaybackCommand:;
+ (id)getResponseAlternativesPlayback;
+ (id)getResponseAlternativesPlaybackWithDictionary:context:;
@end
