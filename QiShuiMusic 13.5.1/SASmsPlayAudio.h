@interface SASmsPlayAudio : SABaseClientBoundCommand
@property (nonatomic) SASmsSms message;
- (id)groupIdentifier;
- (void)setMessage:;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)message;
+ (id)playAudio;
+ (id)playAudioWithDictionary:context:;
@end
