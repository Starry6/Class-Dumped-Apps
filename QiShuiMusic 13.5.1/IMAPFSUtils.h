@interface IMAPFSUtils : NSObject
+ (id)stringForPurgableFlags:;
+ (unsigned long long)purgableFlagsForPath:error:;
@end
