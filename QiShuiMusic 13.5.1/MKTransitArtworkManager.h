@interface MKTransitArtworkManager : NSObject
@property (nonatomic) VKIconManager iconManager;
- (void)purge;
- (id)iconManager;
- (id)initWithIconManager:;
- (void).cxx_destruct;
- (BOOL)_isMemoryConstrained;
- (id)_vkImageWithShieldDataSource:size:featureType:scale:nightMode:widthPaddingMultiple:;
- (id)transitArtworkImageWithShieldDataSource:size:featureType:scale:nightMode:;
- (id)transitArtworkImageWithDataSource:size:featureType:scale:nightMode:;
- (id)transitArtworkImageWithDataSource:size:featureType:scale:nightMode:withWidthPaddingMultiple:;
- (id)_imageWithDataSource:size:featureType:scale:nightMode:withWidthPaddingMultiple:fullBleedColor:;
- (id)transitArtworkImageWithDataSource:size:featureType:scale:nightMode:withWidthPaddingMultiple:fullBleedColor:;
- (id)_createImageWithBlockInAutoreleasePoolIfNeeded:;
- (id)_imageFroMVKImage:;
+ (id)sharedInstance;
@end
