@interface MTLDynamicLibraryDescriptorSPI : NSObject
@property (nonatomic) <MTLLibrary> library;
@property (nonatomic) NSURL url;
@property (nonatomic) Q options;
- (void)setOptions:;
- (id)url;
- (void)dealloc;
- (void)setLibrary:;
- (unsigned long long)hash;
- (void)setUrl:;
- (unsigned long long)options;
- (id)library;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
