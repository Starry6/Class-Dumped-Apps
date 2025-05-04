@interface AWEIMMessageListModule : AWEIMComponentBase
@property (nonatomic) <AWEIMMessageListModuleAssembly> assembly;
@property (nonatomic) AWEIMComponentManager componentManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)componentContext;
- (id)componentsNameArrayWithContext:;
- (id)lazyComponentsNameWithContext:;
- (void)setComponentManager:;
- (void)setAssembly:;
- (id)assembly;
- (void).cxx_destruct;
- (id)componentManager;
@end
