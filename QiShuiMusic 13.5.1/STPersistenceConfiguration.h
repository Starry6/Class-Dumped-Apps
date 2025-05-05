@interface STPersistenceConfiguration : NSObject
+ (id)managedObjectModel;
+ (id)localPersistentXPCStoreDescription;
+ (id)persistentStoreURLForConfigurationName:;
+ (id)persistentStoreDescriptionForConfigurationName:type:;
+ (id)getLocalPersistentXPCStoreDescription;
+ (id)managedObjectModelURL;
@end
