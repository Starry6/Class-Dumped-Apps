@interface VNModelFilesCache : NSObject
- (id)load:;
- (id)init;
- (void)purgeAll;
- (void)unload:;
- (void).cxx_destruct;
- (id).cxx_construct;
+ (id)sharedInstance;
+ (BOOL)useFOpenForModelWithPath:;
@end
