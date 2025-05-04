@interface AWEIMRootComponent : NSObject
@property (nonatomic) AWEIMComponentContext componentContext;
@property (nonatomic) AWEIMComponentManager componentManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)componentContext;
- (id)componentsNameArrayWithContext:;
- (id)lazyComponentsNameWithContext:;
- (void)setComponentManager:;
- (void)setComponentContext:;
- (id)init;
- (void).cxx_destruct;
- (id)componentManager;
+ (id)shared;
+ (id)context;
@end
