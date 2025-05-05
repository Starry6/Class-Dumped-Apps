@interface CTFeatureSetting : NSDictionary
- (void)dealloc;
- (id)initWithDictionary:;
- (id)keyEnumerator;
- (id)objectForKey:;
- (unsigned long long)count;
- (BOOL)isEqualToDictionary:;
@end
