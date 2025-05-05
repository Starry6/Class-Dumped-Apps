@interface ByteRTCRecordingInfo : NSObject
@property (nonatomic) NSString filePath;
@property (nonatomic) q codecType;
@property (nonatomic) q width;
@property (nonatomic) q height;
- (id)filePath;
- (void)setWidth:;
- (void)setFilePath:;
- (long long)height;
- (long long)width;
- (void)setHeight:;
- (void).cxx_destruct;
- (long long)codecType;
- (void)setCodecType:;
@end
