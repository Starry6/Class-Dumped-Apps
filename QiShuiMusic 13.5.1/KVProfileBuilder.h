@interface KVProfileBuilder : NSObject
- (BOOL)_finishWithError:;
- (id)init;
- (id)buildWithError:;
- (void).cxx_destruct;
- (id)_fileURL;
- (id)addDataset:error:;
- (id)finishWritingWithError:;
- (id)initWithProfileInfo:outputStream:fileURL:format:provider:error:;
- (id)_buildWithError:;
+ (id)fileWriterWithProfileInfo:targetDirectory:format:error:;
+ (id)builderWithProfileInfo:format:error:;
+ (void)initalize;
+ (id)fileWriterWithProfileInfo:targetDirectory:filename:format:error:;
@end
