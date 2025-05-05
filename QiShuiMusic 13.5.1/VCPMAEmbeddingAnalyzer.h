@interface VCPMAEmbeddingAnalyzer : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)_configureRequest:withRevision:preferANE:;
- (int)_loadImageURL:withSession:reencodedImageData:andRequestHandler:;
- (void)analyzeWithImageURL:requestTypes:reencode:completionHandler:;
@end
