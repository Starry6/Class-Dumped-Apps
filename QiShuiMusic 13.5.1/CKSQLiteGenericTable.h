@interface CKSQLiteGenericTable : CKSQLiteTable
- (id)valueForProperty:inObject:;
- (void)setValue:forProperty:inObject:;
+ (Class)entryClass;
+ (id)valueForProperty:inObject:;
+ (void)setValue:forProperty:inObject:;
+ (id)uniqueSubclassClassNameForClassName:;
+ (Class)genericTableClassForTOCTableEntry:;
+ (id)genericTableForTOCEntry:;
@end
