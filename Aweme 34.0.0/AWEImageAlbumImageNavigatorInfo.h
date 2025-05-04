@interface AWEImageAlbumImageNavigatorInfo : AWEBaseApiModel
@property (nonatomic) q navigatorType;
@property (nonatomic) NSString navigatorName;
- (long long)navigatorType;
- (void)setNavigatorType:;
- (void).cxx_destruct;
- (id)navigatorName;
- (void)setNavigatorName:;
+ (id)navigatorTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
