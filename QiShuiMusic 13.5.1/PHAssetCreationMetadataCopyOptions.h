@interface PHAssetCreationMetadataCopyOptions : NSObject
@property (nonatomic) BOOL shouldCopyTitleDescriptionAndKeywords;
@property (nonatomic) BOOL shouldCopySpatialOverCaptureResources;
- (id)initWithXPCDict:;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (id)copyWithZone:;
- (void)encodeToXPCDict:;
- (id)plRepresentation;
- (BOOL)shouldCopyTitleDescriptionAndKeywords;
- (void)setShouldCopyTitleDescriptionAndKeywords:;
- (BOOL)shouldCopySpatialOverCaptureResources;
- (void)setShouldCopySpatialOverCaptureResources:;
+ (BOOL)supportsSecureCoding;
+ (id)metadataCopyOptionsForPublishingOriginals;
@end
