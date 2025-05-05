@interface IESForestWorkflowTrace : NSObject
@property (nonatomic) NSMutableArray items;
- (void)appendStep:code:message:;
- (long long)finalErrorCode;
- (id)finalInfo;
- (id)init;
- (id)items;
- (void)setItems:;
- (void).cxx_destruct;
@end
