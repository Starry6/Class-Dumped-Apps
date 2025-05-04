@interface AWEIMUserDBConfig : NSObject
@property (nonatomic) Q writeFileAPIType;
@property (nonatomic) AWEStorage configStorage;
@property (nonatomic) NSDictionary dbConfig;
- (id)configStorage;
- (id)dbConfig;
- (unsigned long long)writeFileAPIType;
- (void)setWriteFileAPIType:;
- (id)init;
- (void).cxx_destruct;
+ (BOOL)clearErrorData_ABTest;
+ (long long)fullUpdateExpireMinute;
+ (BOOL)oneUserReadScene_ABTest;
+ (BOOL)syncSetup_ABTest;
+ (BOOL)checkFullUser_ABTest;
+ (BOOL)readUserFilterErrorData_ABTest;
+ (long long)insertPageSize;
+ (BOOL)enableCleanHistoryVersionDBFile;
+ (BOOL)enableUserRequestOpt;
+ (unsigned long long)writeInfoToFileType;
+ (id)sharedInstance;
@end
