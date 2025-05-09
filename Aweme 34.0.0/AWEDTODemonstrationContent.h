@interface AWEDTODemonstrationContent : MTLModel
@property (nonatomic) NSString coverUrl;
@property (nonatomic) NSString videoUrl;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) NSString videoPath;
@property (nonatomic) q curDuration;
@property (nonatomic) q totalDuration;
@property (nonatomic) BOOL hasTemplateVideo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCoverUrl:;
- (id)coverUrl;
- (long long)curDuration;
- (void)setCurDuration:;
- (BOOL)hasTemplateVideo;
- (void)setHasTemplateVideo:;
- (void)setHeight:;
- (void)setWidth:;
- (long long)totalDuration;
- (double)width;
- (void).cxx_destruct;
- (double)height;
- (void)setVideoPath:;
- (id)videoPath;
- (void)setVideoUrl:;
- (id)videoUrl;
- (void)setTotalDuration:;
+ (id)JSONKeyPathsByPropertyKey;
@end
