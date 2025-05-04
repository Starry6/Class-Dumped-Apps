@interface AWEFavoriteCollectionModel : AWEBaseApiModel
@property (nonatomic) Q collectionType;
@property (nonatomic) AWEFavoriteMovieModel movie;
@property (nonatomic) AWENoxusCompassVideoModel compass;
@property (nonatomic) AWEFavoriteFormatModel format;
- (id)compass;
- (void)setCompass:;
- (unsigned long long)collectionType;
- (id)format;
- (void)setFormat:;
- (void)setCollectionType:;
- (void).cxx_destruct;
- (id)collectionId;
- (id)movie;
- (void)setMovie:;
+ (id)movieJSONTransformer;
+ (id)formatJSONTransformer;
+ (id)compassJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
