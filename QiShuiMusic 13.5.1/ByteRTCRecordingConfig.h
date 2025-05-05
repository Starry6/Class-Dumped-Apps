@interface ByteRTCRecordingConfig : NSObject
@property (nonatomic) NSString dirPath;
@property (nonatomic) q recordingFileType;
- (long long)recordingFileType;
- (void)setRecordingFileType:;
- (id)dirPath;
- (void)setDirPath:;
- (void).cxx_destruct;
@end
