@interface PHMediaFormatConversionDestination : PHMediaFormatConversionContent
@property (nonatomic) PFVideoExportRangeCoordinator singlePassVideoExportRangeCoordinator;
@property (nonatomic) NSString outputPathExtension;
@property (nonatomic) NSURL temporaryOutputDirectoryURL;
@property (nonatomic) NSURL temporaryOutputFileURL;
@property (nonatomic) BOOL usesSinglePassVideoConversion;
@property (nonatomic) Q singlePassVideoConversionTargetLength;
- (void)dealloc;
- (void).cxx_destruct;
- (unsigned long long)length;
- (void)removeTemporaryFiles;
- (BOOL)usesSinglePassVideoConversion;
- (BOOL)waitForAvailabilityOfRange:timeout:error:;
- (id)outputPathExtension;
- (id)temporaryDirectoryPrefix;
- (void)generateTemporaryOutputFileURLForRequest:;
- (BOOL)createTemporaryOutputDirectoryWithError:;
- (BOOL)createTemporaryOutputFileWithErrorError:;
- (id)temporaryOutputDirectoryURL;
- (id)temporaryOutputFileURL;
- (void)removeTemporaryFilesWithCompletionHandler:;
- (BOOL)padToLength:error:;
- (BOOL)padVideoToLength:fileHandle:error:;
- (BOOL)padImageToLength:fileHandle:error:;
- (void)enableSinglePassVideoConversionWithTargetLength:;
- (void)addAvailableRange:;
- (id)errorForSinglePassVideoConversionError:;
- (id)singlePassVideoExportRangeCoordinator;
- (void)setSinglePassVideoExportRangeCoordinator:;
- (void)setOutputPathExtension:;
- (unsigned long long)singlePassVideoConversionTargetLength;
- (void)setSinglePassVideoConversionTargetLength:;
+ (id)destinationForConversionReturningUnchangedSource:;
+ (id)sharedCleanupQueue;
@end
