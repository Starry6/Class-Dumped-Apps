@interface PLTemporaryImageTable : NSObject
- (void)_cleanup;
- (void)dealloc;
- (void).cxx_destruct;
- (void)reset;
- (void)removeItemAtIndex:;
- (BOOL)_writeCompressedThumbnailDataForImage:intoTable:atIndex:;
- (BOOL)_writeBGRAThumbnailDataForImage:intoTable:atIndex:;
- (void)_positional_setThumbnailsWithIdentifier:thumbnailIndex:image:assetUUID:;
- (id)initWithWithPath:imageFormat:;
- (void)setImage:forItemAtIndex:;
- (unsigned long long)_imageTableIndexForItemIndex:;
- (id)imageForItemAtIndex:;
- (void)insertItemAtIndex:;
@end
