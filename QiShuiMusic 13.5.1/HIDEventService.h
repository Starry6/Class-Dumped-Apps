@interface HIDEventService : NSObject
@property (nonatomic) Q serviceID;
- (unsigned long long)serviceID;
- (BOOL)setProperty:forKey:;
- (id)propertyForKey:;
- (void)dispatchEvent:;
- (BOOL)conformsToUsagePage:usage:;
- (id)eventMatching:;
- (void)dealloc;
- (unsigned long long)_cfTypeID;
- (id)description;
@end
