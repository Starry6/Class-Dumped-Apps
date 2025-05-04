@interface AWEClassroomModel.ClassroomVideoModel : MTLModel
@property (nonatomic) NSString uri;
@property (nonatomic) q width;
@property (nonatomic) q height;
@property (nonatomic) _TtC17AWEClassroomModel19ClassroomImageModel coverImage;
@property (nonatomic) double duration;
@property (nonatomic) NSString videoModel;
- (void)setCoverImage:;
- (id)videoModel;
- (void)setVideoModel:;
- (id)initWithDictionary:error:;
- (id)init;
- (void)setHeight:;
- (void)setWidth:;
- (void)setDuration:;
- (id)uri;
- (long long)width;
- (void)setUri:;
- (void).cxx_destruct;
- (double)duration;
- (long long)height;
- (id)initWithCoder:;
- (id)coverImage;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)coverImageJSONTransformer;
@end
