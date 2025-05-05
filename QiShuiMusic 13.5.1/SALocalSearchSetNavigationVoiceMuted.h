@interface SALocalSearchSetNavigationVoiceMuted : SADomainCommand
@property (nonatomic) BOOL voiceMuted;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)voiceMuted;
- (void)setVoiceMuted:;
+ (id)setNavigationVoiceMuted;
+ (id)setNavigationVoiceMutedWithDictionary:context:;
@end
