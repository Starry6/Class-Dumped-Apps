@interface AWESearchNormalCardInfo : AWEBaseApiModel
@property (nonatomic) NSArray images;
@property (nonatomic) NSString siteName;
@property (nonatomic) NSString url;
@property (nonatomic) NSNumber time;
- (id)time;
- (id)images;
- (void)setTime:;
- (void)setUrl:;
- (void)setImages:;
- (void).cxx_destruct;
- (id)url;
- (void)setSiteName:;
- (id)siteName;
+ (id)JSONKeyPathsByPropertyKey;
@end
