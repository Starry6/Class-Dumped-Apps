@interface AWEIMMessageListPerformSchemaComponent : AWEIMComponentBase
@property (nonatomic) AWEIMConversationContext convContext;
@property (nonatomic) NSString convID;
@property (nonatomic) NSString schema;
@property (nonatomic) NSDictionary schemaParams;
@property (nonatomic) RxDeferred viewDidAppearDefer;
- (void)componentDidMounted:;
- (void)hostVC_viewDidAppear;
- (id)schemaParams;
- (void)__log:;
- (id)convID;
- (id)convContext;
- (id)__routerUrlStringWithSchema:;
- (void)__performSchema;
- (id)viewDidAppearDefer;
- (id)__fetchPreDependencyResult;
- (id)__delayDependencyPromise;
- (id)__businessDependencyPromise;
- (id)__businessDependencyMapperWithTaskType:;
- (id)schema;
- (void)dealloc;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
