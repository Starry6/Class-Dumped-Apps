@interface AWEAIGCResultDateModel : MTLModel
@property (nonatomic) AWEURLModel URLModel;
@property (nonatomic) NSString url;
@property (nonatomic) UIImage resultImage;
@property (nonatomic) NSString resultFilePath;
@property (nonatomic) NSData imageData;
@property (nonatomic) NSError error;
@property (nonatomic) Q mediaType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setResultImage:;
- (id)resultFilePath;
- (void)setResultFilePath:;
- (id)URLModel;
- (void)setURLModel:;
- (id)imageData;
- (void)setImageData:;
- (void)setMediaType:;
- (void)setUrl:;
- (void)setError:;
- (unsigned long long)mediaType;
- (void).cxx_destruct;
- (id)error;
- (id)url;
- (id)resultImage;
@end
