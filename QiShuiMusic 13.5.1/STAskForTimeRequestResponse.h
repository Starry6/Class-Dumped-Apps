@interface STAskForTimeRequestResponse : NSManagedObject
@property (nonatomic) NSUUID identifier;
@property (nonatomic) NSNumber timeRequested;
@property (nonatomic) q usageType;
@property (nonatomic) NSDate expirationDate;
@property (nonatomic) NSString requestedApplicationBundleIdentifier;
@property (nonatomic) NSString requestedCategoryIdentifier;
@property (nonatomic) NSString requestedWebDomain;
@property (nonatomic) STCoreUser requestingUser;
@property (nonatomic) NSDate requestTimeStamp;
@property (nonatomic) NSNumber amountGranted;
@property (nonatomic) NSNumber answer;
@property (nonatomic) NSDate responseTimeStamp;
@property (nonatomic) STCoreUser respondingUser;
@property (nonatomic) STFamilyOrganization familyOrganization;
- (void)awakeFromInsert;
+ (id)upsertAskForTimeRequest:fromUser:inContext:error:;
+ (id)_fetchPredicateForAskForTimeRequest:requestingUserDSID:;
@end
