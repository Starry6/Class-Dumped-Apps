@interface SASSuspendClientEndpointer : SABaseClientBoundCommand
@property (nonatomic) NSNumber audioProcessedMs;
@property (nonatomic) NSNumber suspendDurationMs;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)audioProcessedMs;
- (void)setAudioProcessedMs:;
- (id)suspendDurationMs;
- (void)setSuspendDurationMs:;
+ (id)suspendClientEndpointer;
+ (id)suspendClientEndpointerWithDictionary:context:;
@end
