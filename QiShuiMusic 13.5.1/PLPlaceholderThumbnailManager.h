@interface PLPlaceholderThumbnailManager : NSObject
- (id)init;
- (id)placeholderDataForFormat:photoImageSize:width:height:bytesPerRow:dataWidth:dataHeight:imageDataOffset:;
- (void).cxx_destruct;
- (id)_cacheKeyForFormat:photoImageSize:photoImageColor:;
- (id)newPlaceholderImageForFormat:photoImageSize:;
- (id)_placeholderImageWithColor:;
+ (id)sharedManager;
@end
