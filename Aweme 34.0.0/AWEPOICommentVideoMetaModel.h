@interface AWEPOICommentVideoMetaModel : AWEBaseApiModel
@property (nonatomic) NSString vid;
@property (nonatomic) q width;
@property (nonatomic) q height;
@property (nonatomic) q duration;
@property (nonatomic) AWEURLModel poster;
- (void)setHeight:;
- (void)setWidth:;
- (void)setDuration:;
- (id)poster;
- (long long)width;
- (void).cxx_destruct;
- (long long)duration;
- (void)setPoster:;
- (long long)height;
- (void)setVid:;
- (id)vid;
+ (id)JSONKeyPathsByPropertyKey;
@end
