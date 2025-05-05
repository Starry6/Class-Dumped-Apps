@interface AWECloudMemoryUtility : NSObject
+ (double)inactiveMemory:;
+ (double)purgableMemory:;
+ (double)activeMemory:;
+ (double)freeMemory:;
+ (double)totalMemory;
+ (double)usedMemory:;
+ (double)wiredMemory:;
@end
