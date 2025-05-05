@interface ICSQLiteRow : NSObject
@property (nonatomic) q numberOfColumns;
- (id)numberForColumnName:;
- (id)stringForColumnIndex:;
- (id)dataForColumnName:;
- (id)stringForColumnName:;
- (id)numberForColumnIndex:;
- (double)doubleForColumnIndex:;
- (id)initWithStatement:;
- (int)intForColumnName:;
- (long long)numberOfColumns;
- (int)intForColumnIndex:;
- (long long)int64ForColumnIndex:;
- (void).cxx_destruct;
- (id)dataForColumnIndex:;
- (double)doubleForColumnName:;
- (long long)int64ForColumnName:;
- (int)columnIndexForColumnName:;
@end
