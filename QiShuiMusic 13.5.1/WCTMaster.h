@interface WCTMaster : NSObject
@property (nonatomic) NSString type;
@property (nonatomic) NSString name;
@property (nonatomic) NSString tableName;
@property (nonatomic) NSInteger rootpage;
@property (nonatomic) NSString sql;
- (int)rootpage;
- (void)setRootpage:;
- (void)setName:;
- (id)tableName;
- (void)setType:;
- (void)setTableName:;
- (id)sql;
- (id)type;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (void)setSql:;
+ (id)AllProperties;
+ (id)AnyProperty;
+ (id)PropertyNamed;
+ (id)TableName;
+ (id)objectRelationalMappingForWCDB;
+ (id)rootpage;
+ (id)tableName;
+ (id)sql;
+ (id)type;
+ (id)name;
@end
