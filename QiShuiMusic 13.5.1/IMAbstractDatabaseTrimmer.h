@interface IMAbstractDatabaseTrimmer : IMAbstractDatabaseArchiver
- (BOOL)copyDatabase:;
- (void)performMessageSelectionWithOperation:;
- (BOOL)trimDatabaseWithOperation:;
@end
