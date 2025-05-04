@interface AWEIMMessageAttachment : NSObject
- (long long)totalCacheFileSize;
- (BOOL)clearIMCache;
+ (id)relativeAttachmentPathForMD5:upload:fileType:;
+ (id)absoluteAttachmentPathForRelativeAttachmentPath:;
+ (id)fileTypeStringForFileType:;
+ (id)getMemoryCacheImageWithType:encryptedMessage:;
+ (id)getLocalDiskImageCacheWithType:encryptedMessage:;
+ (id)convertFileDicitonaryIntoString:;
+ (id)attachmentNameForMD5:fileType:subType:;
+ (id)relativeAttachmentPathForFileName:upload:;
+ (id)livePhotoOrSlomoLocalDiskPathFromAssetIdentifier:;
+ (id)currentUserAttachmentPath;
+ (void)saveLivePhotoOrSlomoLocalDiskPath:fromAssetIdentifier:;
+ (id)fileTypeStringForFileType:subType:;
+ (id)getMemoryCacheImageWithType:encryptedMessage:reduceResolutionValue:;
+ (id)getAttachmentOtherPathWithPath:;
+ (id)attachmentNameForUniqueID:fileType:subType:;
+ (int)p_convertResourceTypeToFileType:;
+ (void)transfromDiskDataWithUid:newPath:;
+ (void)transfromDiskDataWithUid:oldPath:;
+ (id)p_fileTypeStringForFileType:;
+ (id)attachmentNameForMD5:fileType:;
+ (id)p_uniqueIdFormatWithKey:reduceResolutionValue:;
+ (id)convertFileStringIntoDicitonary:;
+ (void)removeOutOfDateLivePhotoLocalResource;
+ (id)sharedInstance;
+ (id)attachmentPath;
@end
