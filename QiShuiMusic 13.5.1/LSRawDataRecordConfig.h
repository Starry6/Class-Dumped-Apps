@interface LSRawDataRecordConfig : NSObject
@property (nonatomic) NSURL outputUrl;
@property (nonatomic) I pixelformat;
@property (nonatomic) {CGSize=dd} videoSize;
@property (nonatomic) q dumpFrames;
@property (nonatomic) q sourceType;
- (void)setPixelformat:;
- (id)defaultOutputURL;
- (long long)dumpFrames;
- (id)outputUrl;
- (unsigned int)pixelformat;
- (void)setDumpFrames:;
- (void)setOutputUrl:;
- (id)init;
- (long long)sourceType;
- (void)setSourceType:;
- (void).cxx_destruct;
- (id)videoSize;
- (void)setVideoSize:;
@end
