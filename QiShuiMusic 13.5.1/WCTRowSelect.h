@interface WCTRowSelect : WCTSelectBase
- (id)allRows;
- (id)initWithCore:andResults:fromTable:;
- (id)initWithCore:andResults:fromTables:;
- (id)allValues;
- (id)nextValue;
- (id)nextRow;
@end
