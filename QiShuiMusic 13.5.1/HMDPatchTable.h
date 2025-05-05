@interface HMDPatchTable : NSObject
+ (BOOL)atomicStatus:action:;
+ (id)patchLocationsForSystemFunction:;
+ (id)searchSystemFunctionForName:;
+ (id)sharedCacheBaseSlided;
+ (id)taskDyldInfo;
@end
