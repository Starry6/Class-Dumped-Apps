@interface MPSStateResourceList : NSObject
- (id)init;
- (void)dealloc;
- (id)debugDescription;
- (void)appendTexture:;
- (void)appendTexture:format:;
- (void)appendBuffer:;
+ (id)resourceList;
+ (id)resourceListWithTextureDescriptors:;
+ (id)resourceListWithBufferSizes:;
@end
