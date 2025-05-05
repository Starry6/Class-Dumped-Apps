@interface QLExtensionPreview : NSObject
@property (nonatomic) NSString previewDescription;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithDescription:;
- (id)previewDescription;
- (void)setPreviewDescription:;
+ (BOOL)supportsSecureCoding;
@end
