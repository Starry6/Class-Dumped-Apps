@interface AWEStorageFileCleanable : NSObject
- (void)writeDictionary:toFileForKey:completion:;
- (void)readDictionaryFromFileForKey:completion:;
- (void)removeAllFileInDomainWithCompletion:;
- (void)readArrayFromFileForKey:completion:;
- (void)removeFileInDomainForKey:completion:;
- (void)writeArray:toFileForKey:completion:;
- (void)readDataFromFileForKey:completion:;
- (void)writeData:toFileForKey:completion:;
- (void)readStringFromFileForKey:completion:;
- (void)writeString:toFileForKey:completion:;
- (void)readObjectFromFileForKey:completion:;
- (void)writeObject:toFileForKey:completion:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDomain:;
+ (id)universalStorage;
+ (id)storageWithDomain:;
+ (void)autoCleanFileWithCompletion:;
@end
