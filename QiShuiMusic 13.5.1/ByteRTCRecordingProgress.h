@interface ByteRTCRecordingProgress : NSObject
@property (nonatomic) Q duration;
@property (nonatomic) Q fileSize;
- (unsigned long long)fileSize;
- (void)setDuration:;
- (void)setFileSize:;
- (unsigned long long)duration;
@end
