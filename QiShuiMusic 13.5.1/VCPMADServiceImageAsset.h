@interface VCPMADServiceImageAsset : NSObject
@property (nonatomic) BOOL hasValidSceneProcessing;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString clientBundleID;
@property (nonatomic) NSString clientTeamID;
@property (nonatomic) CLLocation location;
@property (nonatomic) BOOL isScreenshot;
@property (nonatomic) NSArray faces;
@property (nonatomic) NSArray nsfwClassifications;
@property (nonatomic) NSArray scenenetClassifications;
@property (nonatomic) NSArray documentObservations;
@property (nonatomic) NSArray barcodeObservations;
@property (nonatomic) BOOL hasCachedParseData;
@property (nonatomic) NSData cachedParseData;
@property (nonatomic) NSString signpostPayload;
@property (nonatomic) {CGSize=dd} resolution;
@property (nonatomic) I orientation;
@property (nonatomic) BOOL isHighResDecoded;
@property (nonatomic) BOOL isSensitive;
- (BOOL)isScreenshot;
- (id)identifier;
- (id)faces;
- (unsigned int)orientation;
- (id)resolution;
- (id)clientBundleID;
- (id)location;
- (void).cxx_destruct;
- (BOOL)isSensitive;
- (id)signpostPayload;
- (void)setSignpostPayload:;
- (id)vcp_textAnnotation;
- (id)vcp_scenenetAnnotation;
- (id)vcp_annotationWithTypes:;
- (id)initWithClientBundleID:andClientTeamID:;
- (BOOL)isHighResDecoded;
- (int)loadPixelBuffer:orientation:;
- (id)documentObservations;
- (void)setDocumentObservations:;
- (BOOL)hasCachedParseData;
- (id)cachedParseData;
- (void)setCachedParseData:overwriteExisting:;
- (id)nsfwClassifications;
- (id)scenenetClassifications;
- (int)loadHighResPixelBuffer:orientation:;
- (id)barcodeObservations;
- (void)setBarcodeObservations:;
- (BOOL)hasValidSceneProcessing;
- (void)setCachedParseData:;
- (id)clientTeamID;
+ (id)assetWithPixelBuffer:orientation:identifier:clientBundleID:clientTeamID:;
+ (id)assetWithURL:identifier:clientBundleID:clientTeamID:;
+ (id)assetWithImageData:uniformTypeIdentifier:identifier:clientBundleID:clientTeamID:;
+ (id)assetWithPhotosAsset:clientBundleID:clientTeamID:;
+ (id)assetWithPhotosAsset:pixelBuffer:orientation:clientBundleID:clientTeamID:;
@end
