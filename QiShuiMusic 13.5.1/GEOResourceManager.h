@interface GEOResourceManager : NSObject
- (BOOL)isDevResourceWithName:fallbackBundle:fallbackNameHandler:;
- (void)dataForSignedResourceWithName:fallbackBundle:fallbackNameHandler:resultHandler:;
- (id)pathForResourceWithName:fallbackBundle:;
- (id)pathForResourceWithName:fallbackBundle:fallbackNameHandler:;
- (id)dataForResourceWithName:fallbackBundle:;
- (void).cxx_destruct;
- (id)dataForResourceWithName:fallbackBundle:fallbackNameHandler:;
- (id)allResourceNames;
- (id)initWithConfiguration:;
+ (id)sharedManager;
+ (id)sharedManagerForConfiguration:;
@end
