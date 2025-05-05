@interface IMDAbstractDatabaseDowngrader : IMAbstractDatabaseArchiver
- (BOOL)copyDatabase:;
- (id)createDowngradeHelper;
@end
