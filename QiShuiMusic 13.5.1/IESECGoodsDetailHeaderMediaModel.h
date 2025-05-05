@interface IESECGoodsDetailHeaderMediaModel : IESECBaseApiModel
@property (nonatomic) IESECHeadVideoModel video;
@property (nonatomic) IESECImageModel image;
@property (nonatomic) NSString preImageURL;
@property (nonatomic) BOOL supportPreview;
@property (nonatomic) BOOL supportNavBlur;
@property (nonatomic) Q previewType;
@property (nonatomic) NSString findSameURL;
@property (nonatomic) NSDictionary videoActionTrack;
- (void)setFindSameURL:;
- (void)setPreImageURL:;
- (id)findSameURL;
- (id)preImageURL;
- (void)setSupportNavBlur:;
- (void)setSupportPreview:;
- (void)setVideoActionTrack:;
- (BOOL)supportNavBlur;
- (BOOL)supportPreview;
- (id)videoActionTrack;
- (void)setImage:;
- (void).cxx_destruct;
- (void)setVideo:;
- (id)video;
- (id)image;
- (unsigned long long)previewType;
- (void)setPreviewType:;
+ (id)JSONKeyPathsByPropertyKey;
@end
