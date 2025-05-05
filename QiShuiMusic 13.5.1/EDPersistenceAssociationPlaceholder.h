@interface EDPersistenceAssociationPlaceholder : NSObject
@property (nonatomic) EFSQLColumnSchema column;
@property (nonatomic) NSString tableName;
- (BOOL)resolveWithSchema:;
- (id)tableName;
- (void).cxx_destruct;
- (id)initWithColumn:tableName:;
- (id)description;
- (id)column;
@end
