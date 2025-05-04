@interface AWEPlayVideoFormatLogger : NSObject
+ (void)logWithLevel:subModuleName:linkIDs:eventType:where:what:who:extra:;
+ (void)logWithLevel:subModuleName:where:what:extra:;
@end
