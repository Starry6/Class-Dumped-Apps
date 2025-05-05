@interface HIDSession : NSObject
- (BOOL)setProperty:forKey:;
- (id)propertyForKey:;
- (void)dealloc;
- (unsigned long long)_cfTypeID;
@end
