@interface QLThumbnailMetadata : NSObject
@property (nonatomic) NSInteger inlinePreviewMode;
@property (nonatomic) q baseline;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)baseline;
- (id)description;
- (void)setBaseline:;
- (id)propertiesDict;
- (int)inlinePreviewMode;
- (void)setInlinePreviewMode:;
+ (BOOL)supportsSecureCoding;
+ (id)thumbnailMetadataFromPropertiesDictionary:;
@end
