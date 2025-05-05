@interface AMSSQLiteCursor : NSObject
@property (nonatomic) q numberOfColumns;
- (id)numberForColumnName:;
- (id)stringForColumnIndex:;
- (id)dataForColumnName:;
- (id)stringForColumnName:;
- (id)numberForColumnIndex:;
- (double)doubleForColumnIndex:;
- (id)initWithStatement:;
- (int)intForColumnName:;
- (id)URLForColumnIndex:;
- (long long)numberOfColumns;
- (int)intForColumnIndex:;
- (id)dateForColumnIndex:;
- (id)dateForColumnName:;
- (long long)int64ForColumnIndex:;
- (id)URLForColumnName:;
- (void).cxx_destruct;
- (id)dataForColumnIndex:;
- (int)_columnTypeForColumnIndex:;
- (double)doubleForColumnName:;
- (long long)int64ForColumnName:;
- (int)columnIndexForColumnName:;
@end
