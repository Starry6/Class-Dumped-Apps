@interface AWEFavoriteFormatModel : AWEBaseApiModel
@property (nonatomic) NSString seasonID;
@property (nonatomic) NSString title;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString content;
@property (nonatomic) Q status;
@property (nonatomic) AWEURLModel coverURL;
- (void)setSeasonID:;
- (id)seasonID;
- (id)schema;
- (id)content;
- (void)setSchema:;
- (void)setStatus:;
- (void)setContent:;
- (void).cxx_destruct;
- (unsigned long long)status;
- (id)title;
- (void)setTitle:;
- (id)coverURL;
- (void)setCoverURL:;
+ (id)coverURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
