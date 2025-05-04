@interface AWEECOMIMMsgReferenceImgModel : AWEECOMIMMsgReferenceModel
@property (nonatomic) double imgWidth;
@property (nonatomic) double imgHeight;
@property (nonatomic) NSString thumbnailImgURLString;
@property (nonatomic) NSString originalImgURLString;
- (id)originalImgURLString;
- (void)setOriginalImgURLString:;
- (id)thumbnailImgURLString;
- (void)setThumbnailImgURLString:;
- (id)init;
- (void).cxx_destruct;
- (double)imgHeight;
- (double)imgWidth;
- (void)setImgHeight:;
- (void)setImgWidth:;
@end
