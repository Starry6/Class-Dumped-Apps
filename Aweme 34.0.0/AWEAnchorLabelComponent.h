@interface AWEAnchorLabelComponent : MTLModel
@property (nonatomic) q componentType;
@property (nonatomic) NSString text;
@property (nonatomic) AWEURLModel icon;
@property (nonatomic) AWEComponentUIInfo uiInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)uiInfo;
- (void)setUiInfo:;
- (id)icon;
- (void)setText:;
- (id)text;
- (long long)componentType;
- (void)setComponentType:;
- (void)setIcon:;
- (void).cxx_destruct;
+ (id)iconJSONTransformer;
+ (id)uiInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
