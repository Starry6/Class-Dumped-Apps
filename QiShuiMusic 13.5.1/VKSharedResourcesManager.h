@interface VKSharedResourcesManager : NSObject
- (id)init;
- (BOOL)hasResources;
- (id)resourcesCreateIfNil:addResourceUser:;
- (void)_removeResourceUser;
- (void).cxx_destruct;
- (id).cxx_construct;
+ (id)sharedResources;
+ (id)sharedManager;
+ (void)removeResourceUser;
+ (id)sharedResourcesCreateIfNil:addResourceUser:;
@end
