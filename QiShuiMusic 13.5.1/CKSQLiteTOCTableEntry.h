@interface CKSQLiteTOCTableEntry : NSObject
@property (nonatomic) NSString logicalTableName;
@property (nonatomic) NSString dbTableName;
@property (nonatomic) NSNumber groupID;
@property (nonatomic) NSString schema;
@property (nonatomic) NSNumber dbVersion;
@property (nonatomic) NSString creatingClass;
@property (nonatomic) NSDictionary propertyData;
- (void)setGroupID:;
- (id)groupID;
- (id)schema;
- (id)logicalTableName;
- (void)setDbVersion:;
- (id)creatingClass;
- (id)dbVersion;
- (void)setSchema:;
- (id)dbTableName;
- (id)propertyData;
- (void)setCreatingClass:;
- (void)setPropertyData:;
- (void).cxx_destruct;
- (void)setDbTableName:;
- (id)description;
- (void)setLogicalTableName:;
@end
