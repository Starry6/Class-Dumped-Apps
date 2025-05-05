@interface IMDWhitetailToCoralDowngradeHelper : IMDDatabaseDowngradeHelper
- (id)initWithPath:;
+ (id)arrayOfCreateTablesSQL;
+ (id)arrayOfTableNames;
+ (id)arrayOfCreateIndexesSQL;
+ (id)arrayOfCreateTriggersSQL;
@end
