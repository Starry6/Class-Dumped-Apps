@interface AWEDeliverySendVideoModel : AWEDeliverySendPhotoModel
@property (nonatomic) UIImage coverImage;
@property (nonatomic) NSString duration;
@property (nonatomic) q mediaSize;
@property (nonatomic) q maxMediaSize;
@property (nonatomic) float bps;
- (id)awed_alogDesc;
- (void)setCoverImage:;
- (void)setMaxMediaSize:;
- (long long)maxMediaSize;
- (float)bps;
- (void)setBps:;
- (void)setDuration:;
- (void).cxx_destruct;
- (id)duration;
- (id)coverImage;
- (long long)mediaSize;
- (void)setMediaSize:;
@end
