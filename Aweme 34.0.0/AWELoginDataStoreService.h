@interface AWELoginDataStoreService : NSObject
@property (nonatomic) BOOL hasWriteDataToFile;
@property (nonatomic) Q fileSettingSize;
@property (nonatomic) NSString filePath;
@property (nonatomic) NSFileHandle handle;
- (unsigned long long)fileSettingSize;
- (void)setFileSettingSize:;
- (BOOL)hasExistFile;
- (void)createFileWhenColdLaunch:;
- (void)trackerWithStatus:message:;
- (void)setHasWriteDataToFile:;
- (BOOL)hasWriteDataToFile;
- (void)writeDataToFile:tag:;
- (BOOL)canReadSingFile;
- (id)readDataFromFile;
- (id)filePath;
- (id)init;
- (void)dealloc;
- (void)setHandle:;
- (id)handle;
- (void)setFilePath:;
- (void).cxx_destruct;
@end
