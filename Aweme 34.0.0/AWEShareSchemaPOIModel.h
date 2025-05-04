@interface AWEShareSchemaPOIModel : AWEBaseApiModel
@property (nonatomic) AWEURLModel iconURL;
@property (nonatomic) AWEURLModel coverURL;
@property (nonatomic) NSString poiName;
@property (nonatomic) NSDictionary trackParams;
- (id)trackParams;
- (void)setTrackParams:;
- (id)poiName;
- (void)setPoiName:;
- (void)setIconURL:;
- (id)iconURL;
- (void).cxx_destruct;
- (id)coverURL;
- (void)setCoverURL:;
+ (id)JSONKeyPathsByPropertyKey;
@end
