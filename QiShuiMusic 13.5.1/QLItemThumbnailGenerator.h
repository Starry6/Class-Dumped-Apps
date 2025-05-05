@interface QLItemThumbnailGenerator : NSObject
@property (nonatomic) QLExtensionThumbnailGenerator extensionGenerator;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (void)generateThumbnailForItem:ofSize:minimumSize:scale:completionBlock:;
- (void)generateThumbnailForItem:ofSize:minimumSize:scale:badgeType:completionBlock:;
- (id)extensionGenerator;
- (void)_generateThumbnailWithURL:size:minimumDimension:scale:badgeType:completionHandler:;
- (void)_generateThumbnailWithFPItem:size:minimumDimension:scale:badgeType:completionHandler:;
- (void)_generateThumbnailWithData:contentType:size:minimumDimension:scale:badgeType:completionHandler:;
- (void)_generateThumbnailForRequest:completionHandler:;
- (id)_fetcherClassesForPreviewItem:;
- (void)setExtensionGenerator:;
@end
