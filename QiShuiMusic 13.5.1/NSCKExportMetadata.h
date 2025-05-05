@interface NSCKExportMetadata : NSManagedObject
@property (nonatomic) NSDate exportedAt;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSPersistentHistoryToken historyToken;
@property (nonatomic) NSSet operations;
+ (id)entityPath;
@end
