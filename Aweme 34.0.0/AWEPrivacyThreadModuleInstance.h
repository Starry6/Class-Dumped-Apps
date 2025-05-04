@interface AWEPrivacyThreadModuleInstance : NSObject
@property (nonatomic) NSArray instanceArray;
- (void)willDispatch;
- (void)didEndDispatch;
- (void)actionBeforeBlockInvoke;
- (void)actionAfterBlockInvoked;
- (id)instanceArray;
- (void)setInstanceArray:;
- (void).cxx_destruct;
- (id)initWithArray:;
@end
