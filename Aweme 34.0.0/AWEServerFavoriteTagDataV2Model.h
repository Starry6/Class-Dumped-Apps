@interface AWEServerFavoriteTagDataV2Model : MTLModel
@property (nonatomic) BOOL renderAsPrimary;
@property (nonatomic) Q type;
@property (nonatomic) NSString title;
@property (nonatomic) NSArray tabData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTabData:;
- (id)tabData;
- (BOOL)renderAsPrimary;
- (void)setRenderAsPrimary:;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)tabDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
