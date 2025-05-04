@interface AWECoverTextImageView : UIImageView
@property (nonatomic) AWECoverTextConfigView configView;
@property (nonatomic) AWECoverTextBackground imageInfo;
- (id)configView;
- (void)layoutOnSuperView;
- (id)initWithConfigView:;
- (void)setConfigView:;
- (void).cxx_destruct;
- (id)imageInfo;
- (void)setImageInfo:;
@end
