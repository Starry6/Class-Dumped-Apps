@interface QLThumbnailHostContext : NSExtensionContext
@property (nonatomic) NSOperationQueue thumbnailGenerationConcurrenQueue;
@property (nonatomic) <QLThumbnailSurfaceGeneratorProtocol> ioSurfaceGenerator;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (void)ioSurfaceWithSize:completion:;
- (id)protocolServiceWithErrorHandler:;
- (void)generateThumbnailOfSize:minimumSize:scale:badgeType:iconFlavor:withItem:ioSurfaceGenerator:generatorData:interpolationQuality:completionHandler:;
- (id)thumbnailGenerationConcurrenQueue;
- (void)setThumbnailGenerationConcurrenQueue:;
- (id)ioSurfaceGenerator;
- (void)setIoSurfaceGenerator:;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@end
