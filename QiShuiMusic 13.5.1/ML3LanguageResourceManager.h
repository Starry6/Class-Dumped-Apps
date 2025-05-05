@interface ML3LanguageResourceManager : NSObject
@property (nonatomic) ML3LanguageResources cachedResources;
@property (nonatomic) NSObject<OS_dispatch_queue> serialQueue;
@property (nonatomic) ML3LanguageResources resources;
- (id)resources;
- (void)invalidateCachedResources;
- (id)serialQueue;
- (id)cachedResources;
- (void).cxx_destruct;
- (id)_buildLanguageResources;
- (id)_init;
- (void)setCachedResources:;
- (void)setSerialQueue:;
+ (id)sharedResourceManager;
@end
