@interface SASSetAudioDuckingDelay : SABaseCommand
@property (nonatomic) NSNumber duckingEventSyncDelay;
@property (nonatomic) NSNumber preTriggerToDuckingEndDuration;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)duckingEventSyncDelay;
- (void)setDuckingEventSyncDelay:;
- (id)preTriggerToDuckingEndDuration;
- (void)setPreTriggerToDuckingEndDuration:;
+ (id)setAudioDuckingDelay;
+ (id)setAudioDuckingDelayWithDictionary:context:;
@end
