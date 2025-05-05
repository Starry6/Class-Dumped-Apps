@interface SCNCommonProfileProgramGenerator : NSObject
@property (nonatomic) NSInteger profile;
- (id)init;
- (void)dealloc;
- (int)profile;
- (void)emptyShaderCache;
- (id)programWithHashCode:engineContext:trackedResource:introspectionDataPtr:;
- (void)releaseProgramForResource:;
+ (id)generatorWithProfile:allowingHotReload:;
+ (id)deferredGeneratorWithProfile:;
@end
