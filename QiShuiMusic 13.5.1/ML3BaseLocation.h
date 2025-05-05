@interface ML3BaseLocation : ML3Entity
- (void)enumerateOrphanedAssetsUsingBlock:;
+ (id)databaseTable;
+ (id)newWithDictionary:inLibrary:;
+ (BOOL)insertionChangesLibraryContents;
@end
