@interface RUIScriptingStaticValue : NSObject
@property (nonatomic) r* identifier;
@property (nonatomic) ^? getter;
@property (nonatomic) ^? setter;
@property (nonatomic) NSInteger JSPropertyAttributes;
- (id)identifier;
- (id)description;
- (void)setIdentifier:;
- (id)setter;
- (void)setSetter:;
- (id)getter;
- (void)setGetter:;
- (int)JSPropertyAttributes;
- (void)setJSPropertyAttributes:;
@end
