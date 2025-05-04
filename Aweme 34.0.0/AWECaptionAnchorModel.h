@interface AWECaptionAnchorModel : MTLModel
@property (nonatomic) NSString keyword;
@property (nonatomic) NSString link;
@property (nonatomic) AWEURLModel icon;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)icon;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)link;
- (void)setLink:;
- (id)keyword;
- (void)setKeyword:;
+ (id)iconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
