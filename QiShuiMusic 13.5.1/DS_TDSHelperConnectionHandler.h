@interface DS_TDSHelperConnectionHandler : NSObject
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithHelper:;
- (void)handleHelperEvent:;
- (void)clearHelper;
@end
