@interface SAPhonePlayVoiceMail : SADomainCommand
@property (nonatomic) SARemoteDevice targetDevice;
@property (nonatomic) NSURL voiceMailId;
- (id)targetDevice;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setTargetDevice:;
- (id)voiceMailId;
- (void)setVoiceMailId:;
+ (id)playVoiceMail;
+ (id)playVoiceMailWithDictionary:context:;
@end
