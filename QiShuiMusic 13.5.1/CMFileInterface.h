@interface CMFileInterface : NSObject
- (id)sessionID;
- (id)version;
- (void).cxx_destruct;
- (id)iOSVersion;
- (id)deviceString;
- (void)processCMData:;
- (id)initReaderWithFileURL:;
- (void)resetReader;
- (id)grabNextRecvData;
- (id)grabNextSentData;
- (id)grabNextRecvMessage;
- (id)grabNextSentMessage;
- (id)grabNextEvent;
- (id)cv3dVersion;
- (id)macOSVersion;
- (id)cvPlayerVersion;
- (id)initWriter;
- (void)updateCV3DVersion:;
- (void)updateCVPlayerVersion:;
- (void)updateSessionID:;
- (void)processCMData:sending:;
- (BOOL)saveToFileURL:;
+ (BOOL)writeContainerToFileURL:container:;
+ (void)updateCV3DVersion:container:;
+ (void)updateCVPlayerVersion:container:;
+ (void)updateSessionID:container:;
@end
