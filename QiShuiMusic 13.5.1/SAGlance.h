@interface SAGlance : SADomainObject
@property (nonatomic) NSString appId;
@property (nonatomic) NSString glanceDisplayName;
@property (nonatomic) NSString glanceId;
@property (nonatomic) NSDictionary localizedGlanceDisplayNameMap;
- (id)groupIdentifier;
- (id)appId;
- (void)setAppId:;
- (id)encodedClassName;
- (id)glanceDisplayName;
- (void)setGlanceDisplayName:;
- (id)glanceId;
- (void)setGlanceId:;
- (id)localizedGlanceDisplayNameMap;
- (void)setLocalizedGlanceDisplayNameMap:;
+ (id)glance;
+ (id)glanceWithDictionary:context:;
@end
