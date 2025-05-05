@interface NSAttributeDictionary : NSDictionary
- (void)__apply:context:;
- (void)dealloc;
- (id)keyEnumerator;
- (void)getObjects:andKeys:;
- (id)objectForKey:;
- (id)newWithKey:object:;
- (id)mutableCopyWithZone:;
- (unsigned long long)count;
- (BOOL)isEqualToDictionary:;
- (id)copyWithZone:;
+ (id)emptyAttributeDictionary;
+ (id)newWithDictionary:;
@end
