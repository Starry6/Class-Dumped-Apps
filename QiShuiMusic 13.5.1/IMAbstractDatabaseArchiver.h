@interface IMAbstractDatabaseArchiver : NSObject
@property (nonatomic) NSString sourcePath;
@property (nonatomic) NSString destinationPath;
- (id)sourcePath;
- (void)dealloc;
- (id)destinationPath;
- (BOOL)copyDatabase:;
- (id)initWithSourceDatabasePath:destinationDatabasePath:;
- (BOOL)deleteFailedArchiveAtPath:error:;
@end
