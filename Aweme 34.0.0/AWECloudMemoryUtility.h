@interface AWECloudMemoryUtility : NSObject
+ (double)totalMemory;
+ (double)freeMemory:;
+ (double)usedMemory:;
+ (double)activeMemory:;
+ (double)inactiveMemory:;
+ (double)wiredMemory:;
+ (double)purgableMemory:;
@end
