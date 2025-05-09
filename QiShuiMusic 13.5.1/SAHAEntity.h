@interface SAHAEntity : SADomainObject
@property (nonatomic) NSString accessory;
@property (nonatomic) NSURL accessoryIdentifier;
@property (nonatomic) NSArray attributes;
@property (nonatomic) NSNumber currentDevice;
@property (nonatomic) NSString entityType;
@property (nonatomic) NSString groupType;
@property (nonatomic) NSString hashedRouteUID;
@property (nonatomic) NSString home;
@property (nonatomic) NSURL homeIdentifier;
@property (nonatomic) NSString name;
@property (nonatomic) NSURL primaryServiceIdentifier;
@property (nonatomic) NSArray relatedEntityIdentifiers;
@property (nonatomic) NSString room;
@property (nonatomic) NSURL roomIdentifier;
@property (nonatomic) NSArray sceneActions;
@property (nonatomic) NSString sceneType;
@property (nonatomic) NSString serviceGroup;
@property (nonatomic) NSArray serviceGroupIdentifiers;
@property (nonatomic) NSString serviceSubType;
@property (nonatomic) NSString serviceType;
@property (nonatomic) NSArray status;
@property (nonatomic) NSArray targetAttributes;
@property (nonatomic) NSString zone;
@property (nonatomic) NSArray zoneIdentifiers;
- (id)currentDevice;
- (id)groupType;
- (void)setStatus:;
- (id)accessory;
- (id)zone;
- (void)setAccessory:;
- (void)setName:;
- (id)groupIdentifier;
- (id)serviceType;
- (void)setServiceType:;
- (void)setAttributes:;
- (id)attributes;
- (id)home;
- (void)setCurrentDevice:;
- (void)setGroupType:;
- (id)encodedClassName;
- (id)entityType;
- (id)status;
- (id)name;
- (void)setHome:;
- (void)setEntityType:;
- (id)room;
- (void)setRoom:;
- (void)setZone:;
- (id)sceneType;
- (void)setSceneType:;
- (id)homeIdentifier;
- (void)setHomeIdentifier:;
- (id)hashedRouteUID;
- (id)accessoryIdentifier;
- (void)setAccessoryIdentifier:;
- (id)roomIdentifier;
- (void)setRoomIdentifier:;
- (id)serviceSubType;
- (void)setServiceSubType:;
- (void)setHashedRouteUID:;
- (id)primaryServiceIdentifier;
- (void)setPrimaryServiceIdentifier:;
- (id)relatedEntityIdentifiers;
- (void)setRelatedEntityIdentifiers:;
- (id)sceneActions;
- (void)setSceneActions:;
- (id)serviceGroup;
- (void)setServiceGroup:;
- (id)serviceGroupIdentifiers;
- (void)setServiceGroupIdentifiers:;
- (id)targetAttributes;
- (void)setTargetAttributes:;
- (id)zoneIdentifiers;
- (void)setZoneIdentifiers:;
+ (id)entity;
+ (id)entityWithDictionary:context:;
@end
