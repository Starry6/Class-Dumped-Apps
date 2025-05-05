@interface TTCaseInsenstiveDictionary : NSMutableDictionary
- (id)init;
- (void)setObject:forKey:;
- (id)toDictionary;
- (id)initWithDictionary:;
- (id)initWithObjects:forKeys:count:;
- (id)keyEnumerator;
- (id)objectForKey:;
- (void).cxx_destruct;
- (unsigned long long)count;
- (void)removeObjectForKey:;
@end
