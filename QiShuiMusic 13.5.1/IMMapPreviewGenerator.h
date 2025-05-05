@interface IMMapPreviewGenerator : IMContactCardPreviewGenerator
+ (id)UTITypes;
+ (BOOL)supportsBlastDoor;
+ (id)mapThumbnailFillSizeForWidth:;
+ (id)newPreviewFromSourceURL:withPreviewConstraints:error:;
+ (id)sizePreviewAtSourceURL:withPreviewConstraints:error:;
+ (BOOL)writesToDisk;
+ (id)newPreviewFromSourceURL:withPreviewConstraints:interfaceStyle:error:;
+ (id)mapSnapshotterQueue;
+ (id)vCardDataForURL:;
+ (id)vCardURLSForData:;
+ (id)coordinateForvCardURL:;
+ (id)_legacyCoordinateForvCardURL:;
+ (id)valueForKey:forURLComponents:;
+ (id)titleBarMaskImageForWidth:constraints:error:;
@end
