@interface IESForestImagePreloader : NSObject
+ (BOOL)hasCacheImageForKey:;
+ (void)preloadWithURLString:enableMemory:;
@end
