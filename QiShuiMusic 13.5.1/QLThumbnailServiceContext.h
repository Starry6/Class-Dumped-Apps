@interface QLThumbnailServiceContext : NSExtensionContext
@property (nonatomic) QLThumbnailProvider thumbnailProvider;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)thumbnailProvider;
- (void)setThumbnailProvider:;
- (id)_thumbnailGenerationQueue;
- (void)generateThumbnailOfSize:minimumSize:scale:badgeType:iconFlavor:contentType:interpolationQuality:withContents:additionalResourcesWrapper:generatorData:completionHandler:;
- (void)ioSurfaceForRequest:withSize:completion:;
- (id)protocolHost;
- (id)protocolHostWithErrorHandler:;
- (void)provideThumbnailForRequest:completionHandler:;
- (void)generateThumbnailOfSize:minimumSize:scale:badgeType:iconFlavor:contentType:interpolationQuality:withFileURLHandler:additionalResourcesWrapper:generatorData:completionHandler:;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@end
