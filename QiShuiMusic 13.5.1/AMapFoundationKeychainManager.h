@interface AMapFoundationKeychainManager : NSObject
@property (nonatomic) Q synchronizationMode;
@property (nonatomic) ^v accessibilityType;
- (id)getKeychainItemForKey:;
- (id)init;
- (BOOL)setObject:forKey:;
- (id)objectForKey:;
- (BOOL)removeObjectForKey:;
- (unsigned long long)synchronizationMode;
- (void)setSynchronizationMode:;
- (id)accessibilityType;
- (void)setAccessibilityType:;
+ (BOOL)isSynchronizationAvailable;
@end
