@interface PLThumbFileManager : PLThumbFileManagerCore
- (id)createImageWithIdentifier:orIndex:;
- (BOOL)setImageForEntry:withIdentifier:orIndex:photoUUID:options:;
- (BOOL)_writeImage:forThumbIdentifier:;
@end
