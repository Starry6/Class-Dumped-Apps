@interface RUIScriptingStaticFunction : NSObject
@property (nonatomic) r* identifier;
@property (nonatomic) ^? function;
@property (nonatomic) NSInteger JSPropertyAttributes;
- (id)function;
- (id)identifier;
- (void)setFunction:;
- (id)description;
- (void)setIdentifier:;
- (int)JSPropertyAttributes;
- (void)setJSPropertyAttributes:;
@end
