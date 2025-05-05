@interface NSSimpleAttributeDictionary : NSDictionary
- (void)dealloc;
- (id)keyEnumerator;
- (id)objectForKey:;
- (id)newWithKey:object:;
- (id)mutableCopyWithZone:;
- (unsigned long long)count;
- (id)copyWithZone:;
- (unsigned long long)slotForKey:;
+ (id)emptyAttributeDictionary;
+ (id)newWithDictionary:;
@end
