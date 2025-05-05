@interface CDDCloudKitRegisteredClient : NSManagedObject
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) NSString storePath;
@property (nonatomic) NSString storeConfigurationName;
@property (nonatomic) NSString fileProtectionType;
@property (nonatomic) NSSet scheduledActivities;
@property (nonatomic) NSString containerIdentifier;
+ (id)entityName;
@end
