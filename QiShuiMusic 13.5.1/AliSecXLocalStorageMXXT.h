@interface AliSecXLocalStorageMXXT : NSObject
+ (BOOL)deleteItemFromKeychain:service:;
+ (id)loadStringFromKeychain:service:;
+ (BOOL)createFile:;
+ (BOOL)createFile:fromFolder:withPath:error:;
+ (BOOL)deleteItemFromKeychain:;
+ (BOOL)deleteItemFromKeychain:error:;
+ (id)getDocumentsFolderFileListFromFolder:withPath:error:;
+ (unsigned long long)getFileSize:fromFolder:withPath:error:;
+ (id)getFirstLevelFolderPath:;
+ (BOOL)isFileExist:;
+ (BOOL)isFileExist:fromFolder:withPath:;
+ (id)loadDataFromFile:fromFolder:withPath:;
+ (id)loadDataFromKeychain:;
+ (id)loadStringFromKeychain:;
+ (id)loadStringFromKeychain:error:;
+ (BOOL)removeFile:error:;
+ (BOOL)removeFile:fromFolder:withPath:error:;
+ (long long)saveDataToFile:Value:fromFolder:withPath:;
+ (long long)saveDataToKeychain:Value:;
+ (long long)saveStringToKeychain:Value:;
+ (BOOL)saveStringToKeychain:Value:error:;
+ (unsigned long long)getFileSize:error:;
@end
