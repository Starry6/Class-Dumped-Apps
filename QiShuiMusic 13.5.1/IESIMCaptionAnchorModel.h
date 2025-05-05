@interface IESIMCaptionAnchorModel : MTLModel
@property (nonatomic) NSString keyword;
@property (nonatomic) NSString link;
@property (nonatomic) IESIMURLModel icon;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)link;
- (void)setLink:;
- (id)icon;
- (void)setIcon:;
- (void).cxx_destruct;
- (void)setKeyword:;
- (id)keyword;
+ (id)iconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
