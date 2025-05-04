@interface AWEPzSQLiteMasterRow : NSObject
@property (nonatomic) NSString type;
@property (nonatomic) NSString tbl_name;
@property (nonatomic) q lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
- (id)tbl_name;
- (void)setTbl_name:;
- (id)type;
- (void)setType:;
- (void).cxx_destruct;
+ (id)objectRelationalMappingForWCDB;
+ (id)AllProperties;
+ (id)AnyProperty;
+ (id)PropertyNamed;
+ (id)tbl_name;
+ (id)type;
@end
