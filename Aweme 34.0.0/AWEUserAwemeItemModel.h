@interface AWEUserAwemeItemModel : MTLModel
@property (nonatomic) NSString awemeId;
@property (nonatomic) AWEURLModel coverUrl;
@property (nonatomic) AWEURLModel gifCoverUrl;
@property (nonatomic) q awemeType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)awemeType;
- (void)setAwemeId:;
- (void)setAwemeType:;
- (id)awemeId;
- (void)setCoverUrl:;
- (id)coverUrl;
- (id)gifCoverUrl;
- (void)setGifCoverUrl:;
- (void).cxx_destruct;
- (id)initWithDict:;
+ (id)coverUrlJSONTransformer;
+ (id)awemeTypeJSONTransformer;
+ (id)gifCoverUrlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
