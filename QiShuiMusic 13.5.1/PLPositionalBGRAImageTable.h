@interface PLPositionalBGRAImageTable : PLPositionalImageTable
- (id)createImageWithIdentifier:orIndex:;
- (void)getImageDataOffset:size:bytesPerRow:fromEntryFooter:;
+ (id)colorSpaceName;
+ (unsigned long long)metalPixelFormat;
@end
