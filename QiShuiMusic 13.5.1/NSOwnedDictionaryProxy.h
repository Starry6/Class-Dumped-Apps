@interface NSOwnedDictionaryProxy : NSDictionary
- (id)keyEnumerator;
- (id)release;
- (id)retain;
- (id)initWithOwner:;
- (id)objectForKey:;
- (unsigned long long)count;
- (void)superRelease;
@end
