@interface WCTDelete : WCTChainCall
- (id)initWithCore:andTableName:;
- (id)limit:;
- (id)orderBy:;
- (id)where:;
- (BOOL)execute;
- (int)changes;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)offset:;
@end
