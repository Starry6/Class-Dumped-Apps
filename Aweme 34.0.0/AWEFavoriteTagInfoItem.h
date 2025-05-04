@interface AWEFavoriteTagInfoItem : AWEBaseApiModel
@property (nonatomic) NSNumber tagID;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString title;
@property (nonatomic) AWEURLModel coverURL;
@property (nonatomic) NSNumber count;
- (id)schema;
- (id)tagID;
- (void)setSchema:;
- (void)setCount:;
- (id)count;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setTagID:;
- (id)coverURL;
- (void)setCoverURL:;
+ (id)coverURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
