@interface OSABinaryImageCatalog : NSObject
- (id)init;
- (void)setKernelImages:;
- (void)setKernelCache:address:size:;
- (BOOL)isAddressInTargetedCache:;
- (void)setKernelTextExecImages:;
- (void)targetSharedCache:withSlide:atBaseAddress:;
- (id)reportUsedImagesFullInfoUsingBlock:;
- (void).cxx_destruct;
- (id)searchFrame:in:regions:result:;
- (unsigned long long)markImageAsUsed:from:;
- (id)reportUsedImages;
- (void)setRootedCacheLibs:count:;
- (id)searchFrame:in:result:;
- (void)appendNotesTo:;
+ (BOOL)isApplePath:orBundle:;
@end
