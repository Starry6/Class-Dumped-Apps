@interface BytedCertVideoRecordParameter : BytedCertParameter
@property (nonatomic) NSString readText;
@property (nonatomic) q msPerWord;
@property (nonatomic) BOOL skipFaceDetect;
@property (nonatomic) NSString faceEnvBase64;
- (id)faceEnvBase64;
- (long long)msPerWord;
- (id)readText;
- (void)setFaceEnvBase64:;
- (void)setMsPerWord:;
- (void)setReadText:;
- (void)setSkipFaceDetect:;
- (BOOL)skipFaceDetect;
- (double)totalReadDurationInSeconds;
- (id)init;
- (void).cxx_destruct;
@end
