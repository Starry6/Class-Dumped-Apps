@interface CalDAVLogScrubber : NSObject
@property (nonatomic) NSURL inputURL;
@property (nonatomic) NSURL outputURL;
@property (nonatomic) <CADDiagnosticLogContext> context;
- (id)init;
- (void)cleanUp;
- (id)context;
- (void)setOutputURL:;
- (id)outputURL;
- (void).cxx_destruct;
- (void)setContext:;
- (id)inputURL;
- (BOOL)scrub;
- (id)temporaryUncompressedFile;
- (id)decompressedInputFile;
- (void)compressFileAt:to:;
- (void)setInputURL:;
+ (id)log;
+ (BOOL)sortICSDocuments;
+ (void)setSortICSDocuments:;
+ (BOOL)redactLog:toOutputFile:context:;
@end
