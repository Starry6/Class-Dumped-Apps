@interface VCPMADServiceImagePixelBufferAsset : VCPMADServiceImageAsset
- (id)identifier;
- (unsigned int)orientation;
- (id)resolution;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithPixelBuffer:orientation:andIdentifier:clientBundleID:clientTeamID:;
- (BOOL)isHighResDecoded;
- (int)loadPixelBuffer:orientation:;
- (id)documentObservations;
- (void)setDocumentObservations:;
- (BOOL)hasCachedParseData;
- (id)cachedParseData;
- (void)setCachedParseData:overwriteExisting:;
@end
