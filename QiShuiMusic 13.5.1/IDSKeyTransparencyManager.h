@interface IDSKeyTransparencyManager : NSObject
- (void)getKeyTransparencyOptInEligiblityForApplication:withCompletion:;
- (void)sendOptInUpdateForApplications:withCompletion:;
@end
