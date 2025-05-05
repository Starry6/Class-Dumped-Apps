@interface Protocol : NSObject
- (id)descriptionForClassMethod:;
- (unsigned long long)hash;
- (BOOL)conformsTo:;
- (id)name;
- (BOOL)isEqual:;
- (id)descriptionForInstanceMethod:;
@end
