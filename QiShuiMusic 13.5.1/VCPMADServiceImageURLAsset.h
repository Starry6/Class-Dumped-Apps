@interface VCPMADServiceImageURLAsset : VCPMADServiceImageAsset
- (id)identifier;
- (unsigned int)orientation;
- (id)resolution;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)isHighResDecoded;
- (int)loadPixelBuffer:orientation:;
- (id)documentObservations;
- (void)setDocumentObservations:;
- (BOOL)hasCachedParseData;
- (id)cachedParseData;
- (void)setCachedParseData:overwriteExisting:;
- (id)initWithURL:identifier:clientBundleID:clientTeamID:;
@end
