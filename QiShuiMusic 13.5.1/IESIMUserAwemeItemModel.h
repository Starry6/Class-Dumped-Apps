@interface IESIMUserAwemeItemModel : MTLModel
@property (nonatomic) NSString awemeId;
@property (nonatomic) IESIMURLModel coverUrl;
@property (nonatomic) IESIMURLModel gifCoverUrl;
@property (nonatomic) q IESIMAwemeType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeId;
- (void)setGifCoverUrl:;
- (long long)IESIMAwemeType;
- (id)coverUrl;
- (id)gifCoverUrl;
- (void)setAwemeId:;
- (void)setCoverUrl:;
- (void)setIESIMAwemeType:;
- (id)initWithDict:;
- (void).cxx_destruct;
+ (id)IESIMAwemeTypeJSONTransformer;
+ (id)coverUrlJSONTransformer;
+ (id)gifCoverUrlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
