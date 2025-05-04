@interface AWEListenFeedContentModel : AWEBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString subTitle;
@property (nonatomic) NSString cover;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString scene;
- (id)cover;
- (void)setCover:;
- (id)schema;
- (void)setScene:;
- (void)setSchema:;
- (id)scene;
- (void)setSubTitle:;
- (id)subTitle;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)JSONKeyPathsByPropertyKey;
@end
