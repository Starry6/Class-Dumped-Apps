@interface SAPhonePlayAudio : SABaseClientBoundCommand
@property (nonatomic) NSString phoneAudioType;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)phoneAudioType;
- (void)setPhoneAudioType:;
+ (id)playAudio;
+ (id)playAudioWithDictionary:context:;
@end
