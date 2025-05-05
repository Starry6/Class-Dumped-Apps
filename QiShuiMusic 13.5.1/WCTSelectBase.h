@interface WCTSelectBase : WCTChainCall
- (id)having:;
- (BOOL)extractPropertyToObject:atIndex:withColumnBinding:;
- (id)extractValue;
- (BOOL)extractValueToRow:;
- (id)initWithCore:;
- (id)initWithResultList:fromTables:;
- (BOOL)lazyPrepare;
- (id)limit:;
- (id)orderBy:;
- (id)where:;
- (BOOL)next;
- (id)statement;
- (void)finalize;
- (void).cxx_destruct;
- (id)groupBy:;
- (id).cxx_construct;
- (id)offset:;
@end
