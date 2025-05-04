@interface AWEPublishInstanceResultModel : NSObject
@property (nonatomic) Q publishedMediaType;
@property (nonatomic) NSString clipId;
@property (nonatomic) NSString videoId;
@property (nonatomic) NSString imageId;
- (id)clipId;
- (unsigned long long)publishedMediaType;
- (void)setPublishedMediaType:;
- (void)setImageId:;
- (BOOL)isValid;
- (void)setVideoId:;
- (void).cxx_destruct;
- (id)imageId;
- (id)videoId;
- (void)copyFrom:;
@end
