@interface AWEIMCustomGiphyUploadModel : NSObject
@property (nonatomic) NSData uploadData;
@property (nonatomic) {CGSize=dd} uploadSize;
@property (nonatomic) BOOL isGif;
@property (nonatomic) NSString md5Str;
@property (nonatomic) NSString imageType;
@property (nonatomic) NSString mimeType;
@property (nonatomic) NSString staticType;
@property (nonatomic) @? completion;
- (id)uploadData;
- (void)setUploadData:;
- (void)setStaticType:;
- (id)staticType;
- (BOOL)isGif;
- (void)setIsGif:;
- (id)md5Str;
- (void)setMd5Str:;
- (void)setUploadSize:;
- (void)setImageType:;
- (id)completion;
- (void)setCompletion:;
- (id)mimeType;
- (void).cxx_destruct;
- (void)setMimeType:;
- (id)uploadSize;
- (id)imageType;
@end
