@interface MIContainerProtectionManager : NSObject
- (void)setDataProtectionOnDataContainer:forNewBundle:retryIfLocked:;
+ (id)defaultManager;
@end
