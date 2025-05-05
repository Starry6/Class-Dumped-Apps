@interface FLEXShortcutsFactory : NSObject
@property (nonatomic) @? properties;
@property (nonatomic) @? classProperties;
@property (nonatomic) @? ivars;
@property (nonatomic) @? methods;
@property (nonatomic) @? classMethods;
@property (nonatomic) @? forClass;
- (id)init;
- (id)shortcutsForObjectOrClass:;
- (void)_register:to:class:;
- (void)reset;
- (id)class;
- (id)properties;
- (id)classProperties;
- (id)ivars;
- (id)methods;
- (id)classMethods;
- (id)forClass;
- (void).cxx_destruct;
+ (id)sharedFactory;
+ (id)shortcutsForObjectOrClass:;
+ (id)append;
+ (id)prepend;
+ (id)replace;
@end
