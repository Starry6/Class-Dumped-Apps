@interface AFCoercion : NSObject
- (id)init;
- (id)initWithBlock:;
- (void).cxx_destruct;
- (id)coerceObject:error:;
+ (id)coercionWithBlock:;
+ (id)identityCoercion;
+ (id)typeAssertionWithClass:;
+ (id)stringToUUIDCoercion;
@end
