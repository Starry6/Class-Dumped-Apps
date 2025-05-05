@interface ABVCardCardDAVRecord : ABVCardRecord
- (BOOL)useThumbnailImageFormatIfAvailable;
+ (BOOL)includeNotesInVCards;
+ (BOOL)includeREVInVCards;
+ (BOOL)includeImageURIInVCards;
+ (BOOL)includeABClipRectInVCardPhotos;
@end
