@interface AWEIMMessageListDataBoostComponent : AWEIMComponentBase
@property (nonatomic) BOOL executeOnAppear;
@property (nonatomic) BOOL isExecuted;
- (void)hostVC_viewWillAppear;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:;
- (void)p_loadDataIfNeeded;
- (BOOL)executeOnAppear;
- (void)setExecuteOnAppear:;
- (BOOL)isExecuted;
- (void)setIsExecuted:;
+ (BOOL)canCreateComponentWithContext:;
@end
