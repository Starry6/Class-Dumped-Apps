@interface IESIMAwemeAnchorGoodsSeedingModel : MTLModel
@property (nonatomic) NSString seedID;
@property (nonatomic) NSString title;
@property (nonatomic) NSString cover;
@property (nonatomic) NSString views;
@property (nonatomic) NSString url;
@property (nonatomic) NSString seedTag;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)seedTag;
- (id)cover;
- (id)seedID;
- (void)setCover:;
- (void)setSeedID:;
- (void)setSeedTag:;
- (id)views;
- (id)url;
- (void)setTitle:;
- (void)setUrl:;
- (id)title;
- (void).cxx_destruct;
- (void)setViews:;
+ (id)JSONStringToArrayTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
