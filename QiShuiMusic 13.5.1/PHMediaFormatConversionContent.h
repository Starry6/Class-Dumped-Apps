@interface PHMediaFormatConversionContent : NSObject
@property (nonatomic) NSString fileSignature;
@property (nonatomic) q mediaType;
@property (nonatomic) NSURL fileURL;
@property (nonatomic) Q length;
@property (nonatomic) NSString fileType;
@property (nonatomic) BOOL isVideo;
- (long long)mediaType;
- (void)setMediaType:;
- (id)fileSignature;
- (void)setFileURL:;
- (BOOL)isVideo;
- (id)fileType;
- (void).cxx_destruct;
- (id)fileURL;
- (id)description;
- (unsigned long long)length;
- (BOOL)isImage;
- (BOOL)isAssetBundle;
- (id)typeFromFileExtensionWithError:;
@end
