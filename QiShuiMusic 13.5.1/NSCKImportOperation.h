@interface NSCKImportOperation : NSManagedObject
@property (nonatomic) NSDate importDate;
@property (nonatomic) NSUUID operationUUID;
@property (nonatomic) NSData changeTokenBytes;
@property (nonatomic) NSSet pendingRelationships;
@end
