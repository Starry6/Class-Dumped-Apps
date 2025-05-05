@interface CPLPlatform : NSObject
@property (nonatomic) NSString suffix;
- (id)init;
- (id)newPlatformImplementationForObject:;
- (id)suffix;
- (Class)implementationClassForAbstractClass:;
- (void)setPlatformImplementation:forClass:;
- (void).cxx_destruct;
- (void)setSuffix:;
- (id)description;
+ (id)defaultPlatform;
+ (id)currentPlatform;
+ (void)setProxyImplementationForPlatform:;
+ (void)setDefaultPlatform:;
@end
