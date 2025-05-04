@interface AWEECEcomOpenPublishParamModel : IESLiveBridgeModel
@property (nonatomic) NSString videoId;
@property (nonatomic) NSString videoUrl;
@property (nonatomic) NSString posterUrl;
@property (nonatomic) NSString role;
- (id)posterUrl;
- (void)setPosterUrl:;
- (id)role;
- (void)setRole:;
- (void)setVideoId:;
- (void).cxx_destruct;
- (id)videoId;
- (void)setVideoUrl:;
- (id)videoUrl;
+ (id)modelCustomPropertyMapper;
@end
