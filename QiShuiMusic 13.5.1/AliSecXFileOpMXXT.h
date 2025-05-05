@interface AliSecXFileOpMXXT : NSObject
+ (id)readFileAtPath:;
+ (BOOL)createFile:;
+ (BOOL)createFileAtPath:name:error:;
+ (id)getDocumentsFileListAtPath:error:;
+ (id)getDocumentsPath;
+ (unsigned long long)getFileSizeAtPath:error:;
+ (id)getFullPathWithFolderPath:subPath:name:;
+ (id)getLibraryPath;
+ (BOOL)isFileExist:;
+ (BOOL)isFileExistAtPath:;
+ (BOOL)removeFile:error:;
+ (BOOL)writeToFileAtPath:WithContent:;
+ (BOOL)removeFileAtPath:error:;
+ (unsigned long long)getFileSize:error:;
@end
