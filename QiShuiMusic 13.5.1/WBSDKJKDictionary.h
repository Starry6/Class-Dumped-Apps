@interface WBSDKJKDictionary : NSMutableDictionary
- (void)setObject:forKey:;
- (void)dealloc;
- (unsigned long long)countByEnumeratingWithState:objects:count:;
- (id)keyEnumerator;
- (void)getObjects:andKeys:;
- (id)objectForKey:;
- (id)mutableCopyWithZone:;
- (unsigned long long)count;
- (void)removeObjectForKey:;
- (id)copyWithZone:;
+ (id)allocWithZone:;
@end
