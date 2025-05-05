@interface IMContactCardPreviewGenerator : IMImagePreviewGenerator
+ (id)UTITypes;
+ (BOOL)supportsBlastDoor;
+ (id)newPreviewFromSourceURL:withPreviewConstraints:error:;
+ (id)vCardDataForURL:;
+ (id)newMonogramImageForData:constraints:;
+ (id)newPreviewFromSourceURL:previewURL:withPreviewConstraints:error:;
+ (id)contactCardPreviewPayloadsDirectoryFrom:previewURL:;
+ (id)contactCardPreviewPayloadFileURLFrom:previewURL:withFileExtension:;
+ (double)contactMonogramDiameter;
+ (id)monogramForFirstName:lastName:;
+ (id)generateContactPlistFrom:previewURL:error:;
+ (id)newContactCardPreviewFrom:previewURL:withPreviewConstraints:error:;
@end
