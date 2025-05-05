@interface SATTSSpeechSynthesisStreaming : SABaseClientBoundCommand
@property (nonatomic) NSString streamId;
- (id)streamId;
- (id)groupIdentifier;
- (void)setStreamId:;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)speechSynthesisStreaming;
+ (id)speechSynthesisStreamingWithDictionary:context:;
@end
