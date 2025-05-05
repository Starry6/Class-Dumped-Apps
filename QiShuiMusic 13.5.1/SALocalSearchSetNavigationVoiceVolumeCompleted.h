@interface SALocalSearchSetNavigationVoiceVolumeCompleted : SABaseCommand
@property (nonatomic) NSString volume;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)volume;
- (id)groupIdentifier;
- (void)setVolume:;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)setNavigationVoiceVolumeCompleted;
+ (id)setNavigationVoiceVolumeCompletedWithDictionary:context:;
@end
