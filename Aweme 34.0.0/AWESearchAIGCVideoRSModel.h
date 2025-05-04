@interface AWESearchAIGCVideoRSModel : AWEBaseApiModel
@property (nonatomic) NSString content;
@property (nonatomic) NSString imageURI;
@property (nonatomic) q imageWidth;
@property (nonatomic) q imageHeight;
@property (nonatomic) NSArray imageURLList;
- (id)imageURLList;
- (void)setImageURLList:;
- (id)content;
- (void)setContent:;
- (void).cxx_destruct;
- (long long)imageWidth;
- (long long)imageHeight;
- (id)imageURI;
- (void)setImageURI:;
- (void)setImageHeight:;
- (void)setImageWidth:;
+ (id)JSONKeyPathsByPropertyKey;
@end
