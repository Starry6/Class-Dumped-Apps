@interface BDXBridgeNamespace : NSObject
@property (nonatomic) NSMutableDictionary innerMethods;
@property (nonatomic) NSMutableDictionary innerCallHandlers;
@property (nonatomic) NSString name;
- (id)initWithNamespace:;
- (id)innerCallHandlers;
- (id)innerMethods;
- (void)registerBridgeMethod:;
- (void)setInnerCallHandlers:;
- (void)setInnerMethods:;
- (id)methods;
- (void)setName:;
- (void).cxx_destruct;
- (id)name;
- (id)callHandlers;
+ (id)defaultNamespace;
@end
