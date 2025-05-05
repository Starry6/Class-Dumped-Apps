@interface NSCKDatabaseMetadata : NSManagedObject
@property (nonatomic) NSNumber hasSubscriptionNum;
@property (nonatomic) NSNumber databaseScopeNum;
@property (nonatomic) NSString databaseName;
@property (nonatomic) q databaseScope;
@property (nonatomic) CKServerChangeToken currentChangeToken;
@property (nonatomic) NSDate lastFetchDate;
@property (nonatomic) BOOL hasSubscription;
@property (nonatomic) NSSet recordZones;
- (long long)databaseScope;
- (void)setDatabaseScope:;
- (void)setHasSubscription:;
- (BOOL)hasSubscription;
+ (id)entityPath;
@end
