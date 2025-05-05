@interface FLEXRuntimeKeyPath : NSObject
@property (nonatomic) FLEXSearchToken bundleKey;
@property (nonatomic) FLEXSearchToken classKey;
@property (nonatomic) FLEXSearchToken methodKey;
@property (nonatomic) NSNumber instanceMethods;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:;
- (id)bundleKey;
- (id)classKey;
- (id)methodKey;
- (id)instanceMethods;
- (void).cxx_destruct;
+ (id)empty;
+ (id)bundle:class:method:isInstance:string:;
@end
