@interface UserRegistryStats : NSObject
@property (nonatomic) q fetchRecordZoneChanges;
@property (nonatomic) q lastfetchRecordZoneChangesAtStart;
@property (nonatomic) q pushNotifications;
@property (nonatomic) q zoneReset;
@property (nonatomic) q recordFetch;
@property (nonatomic) q recordModify;
- (void)setRecordModify:;
- (id)getUserRegistryStats;
- (void)setFetchRecordZoneChanges:;
- (long long)zoneReset;
- (void)setLastfetchRecordZoneChangesAtStart:;
- (id)initWithCoder:;
- (void)setRecordFetch:;
- (long long)recordFetch;
- (void)encodeWithCoder:;
- (long long)fetchRecordZoneChanges;
- (void)printUserRegistryStats:;
- (long long)pushNotifications;
- (long long)recordModify;
- (void)setZoneReset:;
- (void)setPushNotifications:;
- (long long)lastfetchRecordZoneChangesAtStart;
+ (BOOL)supportsSecureCoding;
@end
