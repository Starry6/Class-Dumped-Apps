@interface DMUserDataDispositionManager : NSObject
+ (unsigned int)basicDispositionFlagsFromDispositionFlags:;
+ (unsigned int)backupSourceDispositionFlagsFromDispositionFlags:;
+ (id)descriptionFromDispositionFlags:;
+ (unsigned int)dispositionFlagsFromDispositionDict:;
@end
