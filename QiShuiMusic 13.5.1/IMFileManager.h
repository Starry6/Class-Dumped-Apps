@interface IMFileManager : NSFileManager
- (id)MIMETypeOfPath:;
- (id)displayNameOfFileWithName:hfsFlags:;
- (id)pathExtensionForMIMEType:;
- (id)UTITypeOfMimeType:;
- (id)MIMETypeOfPathExtension:;
- (id)pathExtensionForUTIType:;
- (id)UTITypeOfPath:;
- (id)UTITypeOfPathExtension:;
+ (id)defaultManager;
+ (id)defaultHFSFileManager;
@end
