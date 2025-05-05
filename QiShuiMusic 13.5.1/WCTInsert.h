@interface WCTInsert : WCTChainCall
- (BOOL)doInsertObjects:withError:;
- (BOOL)executeWithObjects:;
- (id)initWithCore:andClass:andTableName:andReplaceFlag:;
- (id)initWithCore:andProperties:andTableName:andReplaceFlag:;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
