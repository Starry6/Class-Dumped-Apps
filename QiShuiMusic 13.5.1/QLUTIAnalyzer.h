@interface QLUTIAnalyzer : NSObject
@property (nonatomic) NSString contentType;
- (id)initWithURL:;
- (id)contentType;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithContentType:;
- (BOOL)isAudioOnly;
+ (BOOL)supportsSecureCoding;
+ (id)knownExtensions;
+ (id)removeSpacesFromString:;
+ (id)UTIForURL:;
+ (id)contentTypeForURL:;
+ (id)privateContentTypeFromFileName:;
+ (BOOL)isTypeAudioOnly:;
+ (BOOL)isContentTypeAudioOnly:;
@end
