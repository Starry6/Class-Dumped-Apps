@interface BDXBridgeShowActionSheetMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) NSArray actions;
- (void)setActions:;
- (void)setSubtitle:;
- (void)setTitle:;
- (id)title;
- (id)actions;
- (void).cxx_destruct;
- (id)subtitle;
+ (id)actionsJSONTransformer;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
