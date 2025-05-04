@interface AWEAnchorPoiUIInfo : MTLModel
@property (nonatomic) AWEComponentUIInfo uiInfo;
@property (nonatomic) NSArray labelArray;
@property (nonatomic) AWEAnchorButton firstButton;
@property (nonatomic) AWEAnchorButton secondButton;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)uiInfo;
- (void)setUiInfo:;
- (void)setLabelArray:;
- (void).cxx_destruct;
- (id)labelArray;
- (void)setFirstButton:;
- (id)firstButton;
- (id)secondButton;
- (void)setSecondButton:;
+ (id)uiInfoJSONTransformer;
+ (id)labelArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
