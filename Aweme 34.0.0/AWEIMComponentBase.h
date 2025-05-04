@interface AWEIMComponentBase : NSObject
@property (nonatomic) AWEIMComponentManager belongingManager;
@property (nonatomic) AWEIMComponentContext context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)actionPublisher:;
- (void)bindService:target:;
- (void)injectToMultiableService:;
- (void)observeActions:;
- (void)observeAction:;
- (id)resolveMultiableService:;
- (id)resolveService:inContext:;
- (void)bindService:target:inContext:;
- (void)deleteCurrentComponent;
- (id)belongingManager;
- (id)siblingComponents;
- (void)setBelongingManager:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (id)subComponents;
+ (BOOL)canCreateComponentWithContext:;
+ (id)componentWithContext:;
@end
