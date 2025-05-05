@interface EDCloudKitControl : NSManagedObject
@property (nonatomic) NSString ckRecordID;
@property (nonatomic) NSData ckRecordSystemFields;
@property (nonatomic) BOOL migratedFromKVSStorage;
+ (id)fetchRequest;
@end
