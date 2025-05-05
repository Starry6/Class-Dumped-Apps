@interface SATTSSetSpeechSynthesisVolume : SABaseClientBoundCommand
@property (nonatomic) NSString actionType;
@property (nonatomic) NSNumber volumeValue;
- (void)setVolumeValue:;
- (id)groupIdentifier;
- (id)actionType;
- (void)setActionType:;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)volumeValue;
- (BOOL)mutatingCommand;
+ (id)setSpeechSynthesisVolume;
+ (id)setSpeechSynthesisVolumeWithDictionary:context:;
@end
