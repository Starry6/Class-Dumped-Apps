@interface SAFmfGeoFence : SADomainObject
@property (nonatomic) SAPersonAttribute theFriend;
@property (nonatomic) SAPersonAttribute friend;
@property (nonatomic) NSString geoFenceTrigger;
@property (nonatomic) SALocation location;
- (id)groupIdentifier;
- (id)location;
- (id)encodedClassName;
- (void)setLocation:;
- (id)theFriend;
- (void)setTheFriend:;
- (id)friend;
- (void)setFriend:;
- (id)geoFenceTrigger;
- (void)setGeoFenceTrigger:;
+ (id)geoFence;
+ (id)geoFenceWithDictionary:context:;
@end
