@interface SAFmfGeoFenceSet : SADomainCommand
@property (nonatomic) NSNumber enable;
@property (nonatomic) NSString fenceType;
@property (nonatomic) SAPerson theFriend;
@property (nonatomic) SAPerson friend;
@property (nonatomic) NSString geoFenceTrigger;
@property (nonatomic) NSNumber oneTimeOnly;
@property (nonatomic) SALocation requestedLocation;
- (id)enable;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setEnable:;
- (id)theFriend;
- (void)setTheFriend:;
- (id)friend;
- (void)setFriend:;
- (id)requestedLocation;
- (void)setRequestedLocation:;
- (id)geoFenceTrigger;
- (void)setGeoFenceTrigger:;
- (id)fenceType;
- (void)setFenceType:;
- (id)oneTimeOnly;
- (void)setOneTimeOnly:;
+ (id)geoFenceSet;
+ (id)geoFenceSetWithDictionary:context:;
@end
