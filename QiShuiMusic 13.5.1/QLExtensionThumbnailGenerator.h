@interface QLExtensionThumbnailGenerator : NSObject
@property (nonatomic) QLExtensionManager extensionManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)extensionManager;
- (void)setExtensionManager:;
- (void).cxx_destruct;
- (void)ioSurfaceWithSize:completion:;
- (void)generatePlatformImageThumbnailForExtensionThumbnailItem:ofSize:minimumSize:scale:badgeType:iconFlavor:generatorData:interpolationQuality:shouldUseRestrictedExtension:completionBlock:;
- (void)generatePlatformImageThumbnailForExtensionThumbnailItem:ofSize:minimumSize:scale:badgeType:generatorData:shouldUseRestrictedExtension:completionBlock:;
- (id)_generateImageFromRawData:bitmapFormat:scale:;
- (id)_generateImageFromURL:withSize:scale:;
- (void)generatePlatformImageThumbnailForExtensionThumbnailItem:ofSize:minimumSize:scale:badgeType:generatorData:interpolationQuality:shouldUseRestrictedExtension:completionBlock:;
- (void)generatePlatformImageThumbnailForExtensionThumbnailItem:ofSize:minimumSize:scale:badgeType:iconFlavor:generatorData:shouldUseRestrictedExtension:completionBlock:;
+ (BOOL)hasThirdPartyThumbnailGeneratorForItem:;
+ (BOOL)hasThirdPartyThumbnailGeneratorForContentType:;
+ (BOOL)hasThumbnailGeneratorForContentType:firstPartyExtension:;
@end
