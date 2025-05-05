@interface SALocalSearchSetNavigationVoiceVolume : SADomainCommand
@property (nonatomic) NSString volume;
- (id)volume;
- (id)groupIdentifier;
- (void)setVolume:;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)setNavigationVoiceVolume;
+ (id)setNavigationVoiceVolumeWithDictionary:context:;
@end
