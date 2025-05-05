@interface BDFileUploadLogManager : NSObject
@property (nonatomic) NSString filePath;
@property (nonatomic) NSFileHandle fileHanle;
- (id)fileHanle;
- (void)setFileHanle:;
- (void)writeLogToManager:;
- (id)filePath;
- (id)init;
- (void)setFilePath:;
- (void).cxx_destruct;
+ (id)shareLogManager;
@end
