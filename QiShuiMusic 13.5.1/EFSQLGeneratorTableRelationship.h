@interface EFSQLGeneratorTableRelationship : NSObject
@property (nonatomic) EFSQLTableSchema table;
@property (nonatomic) EFSQLColumnSchema sourceColumn;
@property (nonatomic) EFSQLTableSchema targetTable;
@property (nonatomic) Q relationship;
- (unsigned long long)relationship;
- (id)table;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)targetTable;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithPropertyMapper:previousTable:;
- (BOOL)isEqualToTableRelationship:;
- (id)sourceColumn;
@end
