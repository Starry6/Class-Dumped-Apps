@interface AWEProfileExtensionAreaDiamondDataInfoModel : MTLModel
@property (nonatomic) AWEURLModel dynamicIconURLModel;
@property (nonatomic) AWEURLModel staticIconURLModel;
@property (nonatomic) NSString hintText;
@property (nonatomic) Q iconStyle;
@property (nonatomic) BOOL isForcedDisplay;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)hintText;
- (id)dynamicIconURLModel;
- (BOOL)isForcedDisplay;
- (void)setDynamicIconURLModel:;
- (id)staticIconURLModel;
- (void)setStaticIconURLModel:;
- (void)setIsForcedDisplay:;
- (void).cxx_destruct;
- (unsigned long long)iconStyle;
- (void)setIconStyle:;
- (void)setHintText:;
+ (id)dynamicIconURLModelJSONTransformer;
+ (id)staticIconURLModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
