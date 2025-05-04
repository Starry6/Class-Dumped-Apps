@interface AWEECOMIMMsgReferenceVideoModel : AWEECOMIMMsgReferenceModel
@property (nonatomic) double coverWidth;
@property (nonatomic) double coverHeight;
@property (nonatomic) NSString coverImgURL;
@property (nonatomic) NSString vid;
@property (nonatomic) double duration;
- (double)coverWidth;
- (void)setCoverWidth:;
- (double)coverHeight;
- (void)setCoverHeight:;
- (void)setCoverImgURL:;
- (id)coverImgURL;
- (id)init;
- (void)setDuration:;
- (void).cxx_destruct;
- (double)duration;
- (void)setVid:;
- (id)vid;
@end
