@interface AWEAnchorLabel : MTLModel
@property (nonatomic) AWEComponentUIInfo uiInfo;
@property (nonatomic) NSArray labelComponents;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)uiInfo;
- (void)setUiInfo:;
- (void).cxx_destruct;
- (id)labelComponents;
- (void)setLabelComponents:;
+ (id)uiInfoJSONTransformer;
+ (id)labelComponentsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
