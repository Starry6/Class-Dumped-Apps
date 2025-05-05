@interface WCTUpdate : WCTChainCall
- (BOOL)executeWithRow:;
- (BOOL)executeWithObject:;
- (id)initWithCore:andProperties:andTableName:;
- (id)limit:;
- (id)orderBy:;
- (id)where:;
- (int)changes;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)offset:;
@end
