@interface QLURLExtensionPreview : QLExtensionPreview
@property (nonatomic) UTType contentType;
@property (nonatomic) QLURLHandler urlHandler;
@property (nonatomic) NSArray additionalURLsAccessed;
- (void)setContentType:;
- (id)contentType;
- (id)initWithCoder:;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (id)urlHandler;
- (void).cxx_destruct;
- (id)description;
- (void)setUrlHandler:;
- (id)initWithURL:contentType:;
- (id)initWithURLHandler:contentType:;
- (void)updateForExternalResourceAccessWithExtension:context:;
- (id)additionalURLsAccessed;
- (void)setAdditionalURLsAccessed:;
+ (BOOL)supportsSecureCoding;
@end
