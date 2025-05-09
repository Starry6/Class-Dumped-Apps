@interface ML3DatabaseRow : NSObject
@property (nonatomic) ML3DatabaseResult parentResult;
- (unsigned long long)columnCount;
- (id)numberForColumnName:;
- (id)stringForColumnIndex:;
- (id)dataForColumnName:;
- (id)stringForColumnName:;
- (id)numberForColumnIndex:;
- (double)doubleForColumnIndex:;
- (id)arrayRepresentation;
- (id)init;
- (id)cStringForColumnIndex:;
- (int)intForColumnName:;
- (int)intForColumnIndex:;
- (id)valueForColumnName:;
- (void)getBlobBytes:outLength:forColumnIndex:;
- (id)valueForColumnIndex:;
- (id)objectAtIndexedSubscript:;
- (id)objectForKeyedSubscript:;
- (long long)int64ForColumnIndex:;
- (id)parentResult;
- (id)initWithParentResult:;
- (void).cxx_destruct;
- (id)dataForColumnIndex:;
- (void)getBlobBytes:outLength:forColumnName:;
- (id)dictionaryRepresentation;
- (double)doubleForColumnName:;
- (id)cStringForColumnName:;
- (long long)int64ForColumnName:;
@end
