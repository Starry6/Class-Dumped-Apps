@interface AWEStorageFileCleanable : NSObject
- (void)readArrayFromFileForKey:completion:;
- (void)readDataFromFileForKey:completion:;
- (void)readDictionaryFromFileForKey:completion:;
- (void)readObjectFromFileForKey:completion:;
- (void)readStringFromFileForKey:completion:;
- (void)removeAllFileInDomainWithCompletion:;
- (void)removeFileInDomainForKey:completion:;
- (void)writeArray:toFileForKey:completion:;
- (void)writeData:toFileForKey:completion:;
- (void)writeDictionary:toFileForKey:completion:;
- (void)writeObject:toFileForKey:completion:;
- (void)writeString:toFileForKey:completion:;
- (id)initWithDomain:;
- (id)init;
- (void).cxx_destruct;
+ (void)autoCleanFileWithCompletion:;
+ (id)storageWithDomain:;
+ (id)universalStorage;
@end
