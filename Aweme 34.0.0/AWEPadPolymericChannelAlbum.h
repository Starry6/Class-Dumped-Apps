@interface AWEPadPolymericChannelAlbum : MTLModel
@property (nonatomic) q identifier;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subTitle;
@property (nonatomic) NSString cover;
@property (nonatomic) double ratingScore;
@property (nonatomic) NSString tag;
@property (nonatomic) NSString jumpUrl;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cover;
- (void)setCover:;
- (id)jumpUrl;
- (void)setJumpUrl:;
- (double)ratingScore;
- (void)setRatingScore:;
- (id)tag;
- (void)setIdentifier:;
- (void)setTag:;
- (void)setSubTitle:;
- (long long)identifier;
- (id)subTitle;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)JSONKeyPathsByPropertyKey;
@end
