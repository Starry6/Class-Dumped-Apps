@interface STUsageRequest : NSManagedObject
@property (nonatomic) NSDate acknowledgedDate;
@property (nonatomic) NSNumber forUserDSID;
@property (nonatomic) NSDate requestedDate;
@property (nonatomic) BOOL isBackgroundTask;
+ (id)fetchRequestForLocalUsageRequests;
+ (id)fetchRequestForUsageRequestsThatAreForRemoteUsers;
+ (id)fetchOrCreateUsageRequestForUserWithDSID:inContext:error:;
+ (id)fetchOrCreateUsageRequestForUser:inContext:error:;
+ (id)fetchOrCreateUsageRequestForLocalUserInContext:error:;
+ (id)fetchOrCreateUsageRequestForRemoteUserWithDSID:inContext:error:;
@end
