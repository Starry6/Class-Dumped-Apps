@interface AWEProfileCoverURLModel : MTLModel
@property (nonatomic) AWEURLModel urlModel;
@property (nonatomic) NSString lightCoverColor;
@property (nonatomic) NSString darkCoverColor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLightCoverColor:;
- (void)setDarkCoverColor:;
- (id)urlModel;
- (void)setUrlModel:;
- (id)lightCoverColor;
- (id)darkCoverColor;
- (void).cxx_destruct;
+ (id)urlModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
