@interface AWENearbyPOIDanmakuModel : AWEBaseApiModel
@property (nonatomic) AWEURLModel iconURL;
@property (nonatomic) NSString content;
@property (nonatomic) q type;
- (void)setIconURL:;
- (id)content;
- (id)iconURL;
- (long long)type;
- (void)setContent:;
- (void)setType:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
