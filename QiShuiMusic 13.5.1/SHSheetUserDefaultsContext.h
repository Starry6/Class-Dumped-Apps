@interface SHSheetUserDefaultsContext : NSObject
@property (nonatomic) NSArray applicationActivities;
@property (nonatomic) NSDictionary activitiesByUUID;
@property (nonatomic) NSArray favoritesProxies;
@property (nonatomic) NSArray suggestionProxies;
@property (nonatomic) NSArray orderedUUIDs;
@property (nonatomic) NSArray excludedActivityTypes;
@property (nonatomic) q category;
- (void).cxx_destruct;
- (id)description;
- (long long)category;
- (id)excludedActivityTypes;
- (id)applicationActivities;
- (id)activitiesByUUID;
- (id)favoritesProxies;
- (id)suggestionProxies;
- (id)orderedUUIDs;
- (id)initWithApplicationActivities:activitiesByUUID:favoritesProxies:suggestionProxies:orderedUUIDs:excludedActivityTypes:activityCategory:;
@end
