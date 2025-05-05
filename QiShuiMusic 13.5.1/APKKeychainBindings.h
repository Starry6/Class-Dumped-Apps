@interface APKKeychainBindings : NSObject
- (void)setObject:forKey:accessibleAttribute:;
- (void)setString:forKey:accessibleAttribute:;
- (void)setString:forKey:;
- (void)setObject:forKey:;
- (id)stringForKey:;
- (id)objectForKey:;
- (void)removeObjectForKey:;
+ (id)sharedKeychainBindings;
@end
