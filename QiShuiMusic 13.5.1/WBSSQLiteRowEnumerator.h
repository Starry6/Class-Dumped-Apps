@interface WBSSQLiteRowEnumerator : NSEnumerator
@property (nonatomic) WBSSQLiteStatement statement;
@property (nonatomic) NSInteger lastResultCode;
- (id)statement;
- (id)nextObject;
- (void).cxx_destruct;
- (id)initWithResultsOfStatement:;
- (int)lastResultCode;
@end
