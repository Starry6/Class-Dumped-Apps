@interface AWEIMMessageAttachment : NSObject
- (BOOL)clearIMCache;
- (long long)totalCacheFileSize;
+ (id)absoluteAttachmentPathForRelativeAttachmentPath:;
+ (id)attachmentNameForMD5:fileType:;
+ (id)attachmentNameForMD5:fileType:subType:;
+ (id)convertFileDicitonaryIntoString:;
+ (id)convertFileStringIntoDicitonary:;
+ (id)currentUserAttachmentPath;
+ (id)fileTypeStringForFileType:;
+ (id)fileTypeStringForFileType:subType:;
+ (id)p_fileTypeStringForFileType:;
+ (id)relativeAttachmentPathForFileName:upload:;
+ (id)relativeAttachmentPathForMD5:upload:fileType:;
+ (id)sharedInstance;
+ (id)attachmentPath;
@end
