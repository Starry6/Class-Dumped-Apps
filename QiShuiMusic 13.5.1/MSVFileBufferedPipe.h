@interface MSVFileBufferedPipe : NSObject
@property (nonatomic) NSFileHandle fileHandleForReading;
@property (nonatomic) NSFileHandle fileHandleForWriting;
- (id)init;
- (void).cxx_destruct;
- (id)fileHandleForWriting;
- (id)fileHandleForReading;
- (void)_createBufferFiles;
- (void)_outputReadyForWriting:;
- (void)_inputReadyForReading:;
- (void)_writeBufferedData;
+ (id)pipe;
@end
