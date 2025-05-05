@interface SATTSGetSpeechSynthesisVolumeResponse : SABaseCommand
@property (nonatomic) NSNumber volumeLevel;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)volumeLevel;
- (void)setVolumeLevel:;
+ (id)getSpeechSynthesisVolumeResponse;
+ (id)getSpeechSynthesisVolumeResponseWithDictionary:context:;
@end
