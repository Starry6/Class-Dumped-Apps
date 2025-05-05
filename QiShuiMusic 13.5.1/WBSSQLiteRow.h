@interface WBSSQLiteRow : NSObject
- (id)initWithStatement:;
- (id)init;
- (int)intAtIndex:;
- (id)initWithCurrentRowOfEnumerator:;
- (long long)int64AtIndex:;
- (id)dataAtIndex:;
- (id)uncopiedDataAtIndex:;
- (id)stringAtIndex:;
- (id)debugDictionaryRepresentationWithStatement:;
- (id)uncopiedRawDataAtIndex:;
- (BOOL)boolAtIndex:;
- (id)objectAtIndex:;
- (double)doubleAtIndex:;
- (BOOL)_isNullAtIndex:;
@end
