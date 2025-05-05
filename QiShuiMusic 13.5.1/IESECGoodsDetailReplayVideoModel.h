@interface IESECGoodsDetailReplayVideoModel : MTLModel
@property (nonatomic) NSString vid;
@property (nonatomic) NSString cover;
@property (nonatomic) NSString playUrl;
@property (nonatomic) NSString title;
@property (nonatomic) q duration;
@property (nonatomic) q width;
@property (nonatomic) q height;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setVid:;
- (id)vid;
- (id)playUrl;
- (id)cover;
- (void)setCover:;
- (void)setPlayUrl:;
- (void)setWidth:;
- (void)setTitle:;
- (long long)height;
- (void)setDuration:;
- (long long)width;
- (id)title;
- (void)setHeight:;
- (void).cxx_destruct;
- (long long)duration;
+ (id)JSONKeyPathsByPropertyKey;
@end
