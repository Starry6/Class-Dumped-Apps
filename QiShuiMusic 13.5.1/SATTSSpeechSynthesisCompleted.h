@interface SATTSSpeechSynthesisCompleted : SABaseClientBoundCommand
@property (nonatomic) q totalPacketNumber;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (long long)totalPacketNumber;
- (void)setTotalPacketNumber:;
+ (id)speechSynthesisCompleted;
+ (id)speechSynthesisCompletedWithDictionary:context:;
@end
