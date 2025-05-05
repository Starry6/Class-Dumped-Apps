@interface NWURLSessionStreamTask : NWURLSessionTask
- (void)closeWrite;
- (void)captureStreams;
- (void)writeData:timeout:completionHandler:;
- (void)readDataOfMinLength:maxLength:timeout:completionHandler:;
- (void)startSecureConnection;
- (void)closeRead;
- (id)response;
- (void).cxx_destruct;
- (BOOL)isKindOfClass:;
- (void)loaderBetterPathAvailable;
- (void)startNextLoad;
@end
