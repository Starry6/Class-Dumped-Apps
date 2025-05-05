@interface SANPSetVolumeLevel : SABaseClientBoundCommand
@property (nonatomic) BOOL acknowledgedExceedingVolumeLimit;
@property (nonatomic) NSString actionType;
@property (nonatomic) NSArray hashedRouteUIDs;
@property (nonatomic) NSNumber volumeValue;
- (void)af_addEntriesToAnalyticsContext:;
- (void)setVolumeValue:;
- (id)groupIdentifier;
- (id)actionType;
- (void)setActionType:;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)volumeValue;
- (id)hashedRouteUIDs;
- (void)setHashedRouteUIDs:;
- (BOOL)acknowledgedExceedingVolumeLimit;
- (void)setAcknowledgedExceedingVolumeLimit:;
+ (id)setVolumeLevel;
+ (id)setVolumeLevelWithDictionary:context:;
@end
