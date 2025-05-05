@interface SAMultiUserInfo : SABaseCommand
@property (nonatomic) NSArray homeMembers;
@property (nonatomic) NSArray multiUserPitchComposition;
@property (nonatomic) BOOL voiceProfilesAreInFlight;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)homeMembers;
- (void)setHomeMembers:;
- (id)multiUserPitchComposition;
- (void)setMultiUserPitchComposition:;
- (BOOL)voiceProfilesAreInFlight;
- (void)setVoiceProfilesAreInFlight:;
+ (id)multiUserInfo;
+ (id)multiUserInfoWithDictionary:context:;
@end
