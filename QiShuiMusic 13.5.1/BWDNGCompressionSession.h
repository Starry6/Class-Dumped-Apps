@interface BWDNGCompressionSession : NSObject
@property (nonatomic) Q auxiliaryImagesSize;
@property (nonatomic) Q thumbnailImageSize;
@property (nonatomic) Q containerSize;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (int)addCompressedThumbnailImage:thumbnailImageSize:options:;
- (void)dealloc;
- (unsigned long long)thumbnailImageSize;
- (BOOL)isContainerOpen;
- (int)openContainerWithOptions:settingsID:;
- (int)addAuxImage:type:auxImageMetadata:options:;
- (int)closeContainerAndCopySurfaceOut:;
- (unsigned long long)auxiliaryImagesSize;
- (int)addThumbnailImage:options:;
- (id)description;
- (unsigned long long)containerSize;
- (int)addMainImage:metadata:options:;
- (int)closeContainer;
- (int)addMetadata:;
@end
