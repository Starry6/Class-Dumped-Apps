@interface NSAutoreleasePool : NSObject
- (id)init;
- (void)dealloc;
- (void)drain;
- (void)addObject:;
- (id)autorelease;
- (id)release;
- (id)retain;
- (unsigned long long)retainCount;
- (id)initWithCapacity:;
+ (id)allocWithZone:;
+ (void)resetTotalAutoreleasedObjects;
+ (void)enableFreedObjectCheck:;
+ (void)addObject:;
+ (void)setPoolCountHighWaterMark:;
+ (void)enableRelease:;
+ (unsigned long long)totalAutoreleasedObjects;
+ (BOOL)autoreleasePoolExists;
+ (unsigned long long)topAutoreleasePoolCount;
+ (unsigned long long)poolCountHighWaterMark;
+ (unsigned long long)autoreleasedObjectCount;
+ (void)releaseAllPools;
+ (unsigned long long)poolCountHighWaterResolution;
+ (void)setPoolCountHighWaterResolution:;
+ (void)showPools;
@end
