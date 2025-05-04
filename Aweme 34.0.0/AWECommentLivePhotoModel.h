@interface AWECommentLivePhotoModel : AWEBaseApiModel
@property (nonatomic) NSArray videoUrl;
@property (nonatomic) double duration;
@property (nonatomic) NSString liveVideoContent;
@property (nonatomic) Q dataSize;
- (id)liveVideoContent;
- (void)setLiveVideoContent:;
- (void)setDataSize:;
- (void)setDuration:;
- (unsigned long long)dataSize;
- (void).cxx_destruct;
- (double)duration;
- (void)setVideoUrl:;
- (id)videoUrl;
+ (id)JSONKeyPathsByPropertyKey;
@end
