@interface MSVSQLRowEnumerator : NSEnumerator
@property (nonatomic) q columnCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)columnCount;
- (id)nextObject;
- (id)jsonValueAtColumnIndex:error:;
- (long long)int64ValueAtColumnIndex:;
- (id)nextObjectWithError:;
- (BOOL)isNullValueAtColumnIndex:;
- (BOOL)boolValueAtColumnIndex:;
- (float)floatValueAtColumnIndex:;
- (id)jsonDataAtColumnIndex:;
- (double)doubleValueAtColumnIndex:;
- (id)stringValueAtColumnIndex:;
- (id)columnNameAtIndex:;
- (void).cxx_destruct;
- (unsigned long long)uint64ValueAtColumnIndex:;
- (id)description;
- (id)objectValueAtColumnIndex:;
- (id)dateValueAtColumnIndex:;
- (id)dataValueAtColumnIndex:;
@end
