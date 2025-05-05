@interface HIDServiceClient : NSObject
@property (nonatomic) Q serviceID;
- (unsigned long long)serviceID;
- (BOOL)setProperty:forKey:;
- (id)propertyForKey:;
- (id)propertiesForKeys:;
- (BOOL)conformsToUsagePage:usage:;
- (id)eventMatching:;
- (void)setRemovalHandler:;
- (void)dealloc;
- (unsigned long long)_cfTypeID;
- (id)description;
@end
