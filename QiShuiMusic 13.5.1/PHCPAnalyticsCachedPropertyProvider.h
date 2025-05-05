@interface PHCPAnalyticsCachedPropertyProvider : NSObject
@property (nonatomic) PHPhotoLibrary photoLibrary;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)photoLibrary;
- (id)initWithPhotoLibrary:;
- (id)init;
- (id)_cachedProperties;
- (void).cxx_destruct;
- (void)registerSystemProperties:;
- (id)_librarySizeRange:;
@end
