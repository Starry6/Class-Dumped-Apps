@interface PLPositionalASTCImageTable : PLPositionalImageTable
- (id)createImageWithIdentifier:orIndex:;
- (void)getImageDataOffset:size:bytesPerRow:fromEntryFooter:;
- (id)debugImageDataAtIndex:;
+ (id)colorSpaceName;
+ (unsigned long long)metalPixelFormat;
@end
