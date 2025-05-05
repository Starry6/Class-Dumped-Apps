@interface EDPersistenceForeignKeyPlaceholder : NSObject
@property (nonatomic) EFSQLColumnSchema column;
@property (nonatomic) NSString tableName;
@property (nonatomic) Q deleteAction;
@property (nonatomic) Q updateAction;
- (BOOL)resolveWithSchema:;
- (id)tableName;
- (BOOL)resolveToStringForTableNames:;
- (unsigned long long)updateAction;
- (id)initWithColumn:tableName:onDelete:onUpdate:;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)deleteAction;
- (id)column;
@end
